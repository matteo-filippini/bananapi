# bananapi

git clone https://github.com/BPI-SINOVOIP/BPI-M4-bsp.git (banana pi kernel sources and other stuff)

install docker and get the sinovoip docker:   
docker pull sinovoip/bpi-build-linux-4.4:ubuntu16.04  

run the docker:  
sudo docker run -v /media:/media -t -i sinovoip/bpi-build-linux-4.4:ubuntu16.04 /bin/bash

copy gasket folder into 
