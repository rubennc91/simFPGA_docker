# simFPGA Docker: Hybrid FPGA + ROS Simulation Environment

This repository provides a complete, containerized simulation ecosystem for validating hardware designs (**Verilog**) applied to robotics. It bridges the gap between RTL hardware design and high-level robot control by integrating **Verilator** with **ROS Noetic** and **Gazebo**.

## Project Overview
Traditional FPGA-robotics development often requires physical hardware or fragmented simulation tools. This environment simplifies the process by offering:
* **High-Speed RTL Simulation:** Powered by Verilator.
* **Graphical User Interface (GUI):** Real-time FPGA state visualization using Dear ImGui.
* **Closed-Loop Robotics:** Direct communication between the virtual FPGA and a ROS-controlled robot in a Gazebo environment (AWS Small House).
* **"Pro" Development Flow:** Edit Verilog code on your host machine (using VS Code or your favorite editor) and compile instantly within the container via Bind Mounts.

---

## Prerequisites
* **Docker** and **Docker Compose** installed on your host.
* **Ubuntu 20.04+** (Host recommended).
* **X11 Permissions:** Run this on your host terminal to allow the container to open windows:
    ```bash
    xhost +local:docker
    ```

---

## Launch Instructions


###
```bash
	git clone https://github.com/rubennc91/simFPGA_docker.git
	cd simFPGA_docker
	docker build -t fpga_sim_image .
```

### Option A: Automation Script (Daily Use)
This is the fastest way to get everything up and running with multiple terminal tabs.

1.  **Grant execution permissions:**
    ```bash
    chmod +x run-simFPGA.sh
    ```
2.  **Run the script:**
    ```bash
    ./run-simFPGA.sh
    ```
*This script starts the container, runs `roscore`, and opens automated tabs for Verilator and Gazebo.*

3.  **Launch the FPGA Simulation:**
    In the **Verilator tab** (which opens already in the correct directory), run the compiled binary:
    ```bash
    ./obj_dir/Vdesign_top
    ```
	The ImGui window will appear. You can now configure your FPGA parameters and start the hardware logic.
4.  **Monitor Gazebo:**
    The **Gazebo tab** automatically executes the roslaunch command. You just need to wait for the Gazebo 3D window to appear.

    Note: If Gazebo starts in "Paused" mode, simply click the Play button at the bottom of the Gazebo GUI to start the physics.


### Option B: Docker Compose (Manual/Stable Flow)
Best for persistent development.

1.  **Start the environment:**
    ```bash
    docker compose up -d
    ```
2.  **Access the working terminals:**
    * **Verilator Terminal:**
        ```bash
        docker exec -it fpga_sim_container bash -c "cd /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws && bash"
        ```
    * **ROS/Gazebo Terminal:**
        ```bash
        docker exec -it fpga_sim_container bash -c "source /root/paper_simfpga_ws/devel/setup.bash && roslaunch diffdrive_cam_bot main.launch"
        ```
### Option C: Clean Build & Run (Full Reset Flow)
Use this option if you have modified the `Dockerfile`, added new system dependencies, or want to ensure a completely clean environment synchronized with the latest GitHub state.

1. **Build the image from scratch:**
   ```bash
   docker build --no-cache -t sim-fpga-docker .
   ```
   
2. **Run the container manually:**
   ```bash
   docker run -it --name fpga_sim_container --rm \
	    --net=host \
	    --privileged \
	    --device /dev/dri:/dev/dri \
	    -e DISPLAY=$DISPLAY \
	    -v /tmp/.X11-unix:/tmp/.X11-unix \
	    -v $(pwd):/root/simFPGA_docker \
	    fpga_sim_image
   ```
3.  **Access the working terminals:**
    * **Verilator Terminal:**
        ```bash
        docker exec -it fpga_sim_container bash -c "cd /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws && bash"
        ```
    * **ROS/Gazebo Terminal:**
        ```bash
<<<<<<< HEAD
        docker exec -it fpga_sim_container bash -c "source /root/paper_simfpga_ws/devel/setup.bash && roslaunch diffdrive_cam_bot main.launch"

=======
        docker exec -it robot_ruben bash -c "source /root/paper_simfpga_ws/devel/setup.bash && roslaunch diffdrive_cam_bot main.launch"
		```
>>>>>>> d1a5bd137233a5135b1c408830069a5783b5a562
---

## The Development Cycle
Thanks to the volume mapping, you don't need to edit files inside the container:

1.  **Edit:** Open the Verilog file on your host machine (e.g., `~/docker_simFPGA/.../rtl/design_top.v`) with any editor.
2.  **Save:** Changes are instantly reflected inside the Docker container.
3.  **Compile:** In the Verilator terminal (inside Docker), run:
    ```bash
    make -j$(nproc) && ./obj_dir/Vdesign_top
	```
---

## Project Directory Structure
```text
.
├── Dockerfile
├── docker-compose.yml
├── run_sim.sh
└── sim_fpga/
	└── paper-FPGA_Robotics-sim-FPGA/
		├── paper_verilator_ws/  # Verilator & RTL code
		└── paper_ros_ws/        # ROS Packages (Robot & Worlds)
```
