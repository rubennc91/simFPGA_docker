#!/bin/bash

# 1. Permisos de pantalla
xhost +local:docker

# 2. Limpiar
docker rm -f fpga_sim_container 2>/dev/null

# 3. Lanzar el motor (IMPORTANTE: Nombre de imagen fpga_sim_image)
echo "🚀 Starting container..."
docker run -d --name fpga_sim_container --rm \
    --net=host \
    --privileged \
    --device /dev/dri:/dev/dri \
    -e DISPLAY=$DISPLAY \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -v $(pwd):/root/simFPGA_docker \
    fpga_sim_image \
    bash -c "source /opt/ros/noetic/setup.bash && roscore"

sleep 3 # Damos un poco más de tiempo

# 4. Pestaña Verilator
echo "🖥️ Opening Verilator..."
gnome-terminal --tab --title="VERILATOR" -- bash -c "docker exec -it fpga_sim_container bash -c 'cd /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws && bash'"

# 5. Pestaña Gazebo
echo "🤖 Opening Gazebo..."
gnome-terminal --tab --title="GAZEBO" -- bash -c "docker exec -it fpga_sim_container bash -c 'source /root/paper_simfpga_ws/devel/setup.bash && roslaunch diffdrive_cam_bot main.launch; bash'"

echo "✅ All set! Your automated workspaces are ready."
