

CC = $(CROSS_COMPILE)gcc
CFLAGS += -Wall -I ../../../.. -I lib/include -I lib/include -I /opt/ros/dashing/include/ -D RECONOS_OS_linux -D RECONOS_BOARD_zedboard_d -I $(RECONOS)/linux/tools/timer
LDFLAGS += -lpthread -L $(RECONOS)/linux/tools/timer -ltimer -Bdynamic -L /opt/ros/dashing/lib/*.so -L lib/runtime/comp/reconros/lib/*.so

MKDIRP = mkdir -p

OBJS = rt_filterdemo/filterdemo.o application/main.o lib/runtime/reconos_app.o lib/runtime/reconos.o lib/runtime/comp/ros_reconf_server.o lib/runtime/comp/ros_action.o lib/runtime/comp/mbox.o lib/runtime/comp/rqueue.o lib/runtime/comp/ros_sub.o lib/runtime/comp/ros_pub.o lib/runtime/comp/ros.o lib/runtime/comp/ros_service.o lib/runtime/comp/reconros/action/reconf__functions.o lib/runtime/comp/reconros/action/reconf__type_support.o lib/runtime/arch/arch_linux.o lib/runtime/arch/arch_xilkernel.o 
BUILD_OBJS = $(OBJS:%=_build/%)

all: $(BUILD_OBJS)
	$(CC) $(BUILD_OBJS) $(LDFLAGS) -o reconfserver

install: all
	cp reconfserver $(PREFIX)

clean:
	rm -rf _build reconfserver

_build/%.o: %.c
	$(MKDIRP) $(@D)
	$(CC) $(CFLAGS) -x c -c $< -o $@

_build/%.o: %.cpp
	$(MKDIRP) $(@D)
	$(CC) $(CFLAGS) -x c -c $< -o $@

_build/%.o: %.cc
	$(MKDIRP) $(@D)
	$(CC) $(CFLAGS) -c $< -o $@
