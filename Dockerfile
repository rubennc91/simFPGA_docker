FROM osrf/ros:noetic-desktop-full
ENV DEBIAN_FRONTEND=noninteractive

# 1. Instalar todas las dependencias (incluyendo OpenCV)
RUN apt-get update && apt-get install -y \
    git build-essential verilator libsdl2-dev libsdl2-image-dev \
    pkg-config libgl1-mesa-dev libglu1-mesa-dev cmake libopencv-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /root

# 2. Clonar y asegurar la descarga física de ImGui (Submódulos)
RUN git clone https://github.com/JdeRobot/FPGA-robotics.git
WORKDIR /root/FPGA-robotics
RUN git submodule update --init --recursive

# 3. COMPILAR VERILATOR
# Usamos la ruta exacta donde está el Makefile
WORKDIR /root/FPGA-robotics/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws
# Limpiamos por si acaso y compilamos
# RUN make clean && make -j$(nproc)

# 4. PREPARAR ROS WORKSPACE
# RUN mkdir -p /root/paper_simfpga_ws/src
# WORKDIR /root/paper_simfpga_ws/src
# RUN /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_init_workspace"
# RUN cp -r /root/FPGA-robotics/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_ros_ws/src/* . || true
# WORKDIR /root/paper_simfpga_ws
# RUN /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_make"

# 5. Configuración de entorno
# RUN echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
# RUN echo "source /root/paper_simfpga_ws/devel/setup.bash" >> ~/.bashrc

WORKDIR /root
CMD ["bash"]
