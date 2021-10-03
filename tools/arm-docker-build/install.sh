#!/bin/bash

#sudo docker image build -t ros_arm:1.1 Docker/
sudo docker run -it --rm  --name ros_arm_inst_2_0 -v /usr/bin/qemu-arm-static:/usr/bin/qemu-arm-static -v $(pwd)/Docker/workspace:/mnt/workspace:rw ros_arm:1.1 bash /mnt/workspace/workspace.sh