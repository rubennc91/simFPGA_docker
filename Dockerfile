FROM osrf/ros:noetic-desktop-full
ENV DEBIAN_FRONTEND=noninteractive

# 1. Dependencies + Editors + Python Pip
RUN apt-get update && apt-get install -y \
    git build-essential verilator libsdl2-dev libsdl2-image-dev \
    pkg-config libgl1-mesa-dev libglu1-mesa-dev cmake libopencv-dev \
    nano vim python3-pip \
    && rm -rf /var/lib/apt/lists/*

RUN pip3 install requests

WORKDIR /root

# 2. Clone Repository
RUN git clone --recursive https://github.com/rubennc91/simFPGA_docker.git

# 3. Build Verilator Workspace
WORKDIR /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws
RUN sed -i 's/imgui_impl_sdl2.cpp/imgui_impl_sdl.cpp/g' Makefile
RUN sed -i 's/LIBS = -L$(ROS_LIB_DIR) -lroscpp/LIBS = -L$(ROS_LIB_DIR) -lroscpp -lxmlrpcpp -lrostime -lcpp_common -lrosconsole_log4cxx -lrosconsole_backend_interface -lclass_loader -lroslib -lmessage_filters -lrospack/g' Makefile
RUN make clean && make -j$(nproc)

# 4. Prepare ROS Workspace
RUN mkdir -p /root/paper_simfpga_ws/src
WORKDIR /root/paper_simfpga_ws/src
RUN /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_init_workspace"

WORKDIR /root/paper_simfpga_ws
RUN /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_make"

# 5. Environment configuration
RUN echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
RUN echo "source /root/paper_simfpga_ws/devel/setup.bash" >> ~/.bashrc

WORKDIR /root
CMD ["bash"]
