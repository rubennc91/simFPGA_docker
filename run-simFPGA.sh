#!/bin/bash

# 1. Permisos de pantalla
xhost +local:docker

# 2. Limpiar
docker rm -f fpga_sim_container 2>/dev/null

# 3. Lanzar el motor
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

sleep 3 # Esperamos a que el contenedor esté estable

# --- NUEVA SECCIÓN: VINCULACIÓN EN VIVO (MANTENIMIENTO ROS) ---
echo "🔗 Linking ROS workspace and compiling..."
docker exec -it fpga_sim_container bash -c "
    # Limpiamos el src interno por si acaso
    rm -rf /root/paper_simfpga_ws/src/* && \
    # Creamos enlaces simbólicos (accesos directos) a tu PC real
    ln -s /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_ros_ws/* /root/paper_simfpga_ws/src/ && \
    # Compilamos para que ROS reconozca los paquetes
    cd /root/paper_simfpga_ws && \
    source /opt/ros/noetic/setup.bash && \
    catkin_make
"
# --------------------------------------------------------------

# 4. Pestaña Verilator
echo "🖥️ Opening Verilator..."
gnome-terminal --tab --title="VERILATOR" -- bash -c "docker exec -it fpga_sim_container bash -c 'cd /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws && bash'"

# 5. Pestaña Gazebo
echo "🤖 Opening Gazebo..."
gnome-terminal --tab --title="GAZEBO" -- bash -c "docker exec -it fpga_sim_container bash -c 'source /root/paper_simfpga_ws/devel/setup.bash && roslaunch diffdrive_cam_bot main.launch; bash'"

echo "✅ All set! Your automated workspaces are ready."
