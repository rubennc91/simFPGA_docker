# simFPGA_docker


Construir la imagen:
Bash

docker build -t fpga-docker-ruben .

Habilitar gráficos X11:
Bash

xhost +local:docker

Lanzar el contenedor maestro (Terminal 1):
Bash

    docker run -it --name robot_ruben --net=host -e DISPLAY=$DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix fpga-docker-ruben

3. Cómo usar tus 3 terminales con tu nuevo repo

Una vez el contenedor esté corriendo, abre nuevas pestañas en tu PC y usa docker exec:

    Terminal 1 (dentro del docker original):
    Bash

roscore

Terminal 2 (Verilator):
Bash

docker exec -it robot_ruben bash
cd /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws
./obj_dir/Vdesign_top

Terminal 3 (Gazebo/ROS Launch):
Bash

docker exec -it robot_ruben bash
roslaunch diffdrive_cam_bot main.launch
