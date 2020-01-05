# bananapi

To install drivers for google coral M.2 ideally we can proceed in two ways: compiling the driver as module directly on banana pi or cross compiling the whole kernel configuring the driver as module. Actually both are not working.  

Get the ubuntu server 16.04 image to burn on SD:  
*https://drive.google.com/open?id=1G4915FPOU4pDzbI0TCFH8wWXUGmNdlkF* to upload the image on SD card (at least 8GB) the bpi-tools can be used *curl -sL https://github.com/BPI-SINOVOIP/bpi-tools/raw/master/bpi-tools | sudo -E bash -* then the command is: *sudo bpi-copy <xxxxx.img.zip> <device path ie /dev/sdb>*  

This image does not include kernel headers useful to compile the driver so is still required compiling the whole kernel from sources (or get headers from this git).  

*git clone https://github.com/BPI-SINOVOIP/BPI-M4-bsp.git* (banana pi kernel sources and other stuff)

banana pi gives a docker with all dependecies installed to easly cross compile the kernel, so get the sinovoip docker:   
*docker pull sinovoip/bpi-build-linux-4.4:ubuntu16.04*  

run the docker:  
*sudo docker run -v /media:/media -t -i sinovoip/bpi-build-linux-4.4:ubuntu16.04 /bin/bash*

before compiling the kernel, coral driver can be added to drivers dir (to compile them as module):  
download and extract deb package (instructions below) or use the version on this git. The version here already includes Makefile and Kconfig I edited to correctly see the module on kernel config menu.   


Download coral drivers (from google support):  
1) *apt download gasket-dkms (download the deb package)   
2) Unpack and change dir: *dpkg-deb -R gasket-dkms_1.0-9_all.deb gasket && cd gasket   
3) Copy the src to the correct name/location: *sudo cp -r usr/src/gasket-1.0 /usr/src/gasket-dkms-1.0  
4) Finally, add and install the driver (here the $(uname -r) should be switched to your 4.9 header, we have tested with 4.19 and cannot commit if everything will work perfectly with 4.9):
*sudo dkms add gasket-dkms/1.0 --kernelsourcedir=/usr/src/linux-headers--$(uname -r)
*sudo dkms install gasket-dkms/1.0 --kernelsourcedir=/usr/src/linux-headers-$(uname -r)
