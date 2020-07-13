CC = gcc

CFLAGS += -g -Wno-unused-variable -Wall -I ../../../../../reconos/reconos -I lib/runtime/comp/ -I /opt/ros/foxy/include/ -I msg_support/install/reconros/include/
LDFLAGS += -lpthread -L /opt/ros/foxy/lib/*.so -L msg_support/install/reconros/lib/*.so

MKDIRP = mkdir -p

OBJS = main.o

BUILD_OBJS = $(OBJS:%=_build/%)

all: $(BUILD_OBJS)
	$(CC) $(BUILD_OBJS) $(LDFLAGS) -o client_app

install: all
	cp client_app $(PREFIX)

clean:
	rm -rf _build client_app

_build/%.o: %.c
	$(MKDIRP) $(@D)
	$(CC) $(CFLAGS) -x c -c $< -o $@

_build/%.o: %.cpp
	$(MKDIRP) $(@D)
	$(CC) $(CFLAGS) -x c -c $< -o $@
