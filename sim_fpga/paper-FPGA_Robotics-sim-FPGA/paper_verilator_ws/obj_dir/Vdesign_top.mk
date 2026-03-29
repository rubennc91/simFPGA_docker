# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vdesign_top.mk

default: Vdesign_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /usr/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /usr/lib/x86_64-linux-gnu

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vdesign_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vdesign_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/opt/ros/noetic/include/ -I/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/include -I/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui -I/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/backends -DASSETS_DIR=\"/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/src\" -g -I/usr/include/SDL2 -D_REENTRANT -I/usr/include/opencv4/opencv -I/usr/include/opencv4  \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	imgui_impl_opengl3 \
	imgui_impl_sdl \
	imgui \
	imgui_demo \
	imgui_draw \
	imgui_tables \
	imgui_widgets \
	main \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui \
	/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/backends \
	/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/src \


### Default rules...
# Include list of all generated classes
include Vdesign_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

imgui_impl_opengl3.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/backends/imgui_impl_opengl3.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
imgui_impl_sdl.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/backends/imgui_impl_sdl.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
imgui.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/imgui.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
imgui_demo.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/imgui_demo.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
imgui_draw.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/imgui_draw.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
imgui_tables.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/imgui_tables.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
imgui_widgets.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/../../../third_party/imgui/imgui_widgets.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/src/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vdesign_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
