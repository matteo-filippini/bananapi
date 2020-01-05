# bananapi

To install drivers for google coral M.2 we can proceed in two ways: compiling the driver as module directly on banana pi or cross compiling the whole kernel configuring the driver as module. Actually both are not working.  

Get the ubuntu server 16.04 image to burn on SD:  
*https://drive.google.com/open?id=1G4915FPOU4pDzbI0TCFH8wWXUGmNdlkF* to upload the image on SD card (at least 8GB) the bpi-tools can be used *curl -sL https://github.com/BPI-SINOVOIP/bpi-tools/raw/master/bpi-tools | sudo -E bash -* then the command is: *sudo bpi-copy <xxxxx.img.zip> <device path ie /dev/sdb>*  

This image does not include kernel headers useful to compile the driver so is still required compiling the whole kernel from sources (or get headers from this git).  

*git clone https://github.com/BPI-SINOVOIP/BPI-M4-bsp.git* (banana pi kernel sources and other stuff)

get the sinovoip docker:   
*docker pull sinovoip/bpi-build-linux-4.4:ubuntu16.04*  

run the docker:  
*sudo docker run -v /media:/media -t -i sinovoip/bpi-build-linux-4.4:ubuntu16.04 /bin/bash*

copy gasket folder into 
