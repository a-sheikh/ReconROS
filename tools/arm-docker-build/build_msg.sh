#!/bin/bash
docker run -it --rm  --name ros_arm_inst_2_0 -v /usr/bin/qemu-arm-static:/usr/bin/qemu-arm-static -v $(pwd)/:/mnt/project:rw -v $RECONOS:/mnt/reconos:ro ros_arm:1.1 bash /mnt/reconos/tools/arm-docker-build/Docker/workspace/compile_msg.sh
