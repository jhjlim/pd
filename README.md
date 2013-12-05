pd
==

Pure Data testing for rPi


# replace the "config.txt" in the /boot/ directory with the new one
# this changes the screen output size to fit on small display
cd /boot/
sudo rm config.txt
cd /home/pi/pd
sudo cp config.txt /boot/

# copy the bigText.sh script to /bin/
# run this script to make text visible!
sudo cp bigText.sh /bin/



