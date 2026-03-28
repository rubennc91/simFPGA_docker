# 1. Base ROS Noetic
FROM osrf/ros:noetic-desktop-full

ENV DEBIAN_FRONTEND=noninteractive

# 2. Instalar dependencias
RUN apt-get update && apt-get install -y \
    git build-essential verilator libsdl2-dev libsdl2-image-dev \
    pkg-config libgl1-mesa-dev libglu1-mesa-dev cmake libopencv-dev \
    nano \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /root

# 3. Clonar tu repositorio
RUN git clone --recursive https://github.com/rubennc91/simFPGA_docker.git

# 4. COMPILAR EL SIMULADOR (Verilator)
WORKDIR /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws

# --- PARCHES PARA EL MAKEFILE ---
# A) Corregimos el nombre de SDL
RUN sed -i 's/imgui_impl_sdl2.cpp/imgui_impl_sdl.cpp/g' Makefile

# B) CORRECCIÓN "TOTAL" DE LIBRERÍAS: Añadimos message_filters y rospack
RUN sed -i 's/LIBS = -L$(ROS_LIB_DIR) -lroscpp/LIBS = -L$(ROS_LIB_DIR) -lroscpp -lxmlrpcpp -lrostime -lcpp_common -lrosconsole_log4cxx -lrosconsole_backend_interface -lclass_loader -lroslib -lmessage_filters -lrospack/g' Makefile

# 5. Ejecutar la compilación
RUN make clean && make -j$(nproc)


# 4. PREPARAR ROS WORKSPACE
RUN mkdir -p /root/paper_simfpga_ws/src
WORKDIR /root/paper_simfpga_ws/src
RUN /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_init_workspace"

# COPIA TODO DESDE TU REPO (Incluyendo el escenario de AWS y el robot)
RUN cp -r /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_ros_ws/* /root/paper_simfpga_ws/src/

WORKDIR /root/paper_simfpga_ws
RUN /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_make"

# 9. Configuración final del entorno automático
RUN echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
RUN echo "source /root/paper_simfpga_ws/devel/setup.bash" >> ~/.bashrc

WORKDIR /root
CMD ["bash"]
