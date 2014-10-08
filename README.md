raspDuino
=========

automagicali upload this code to arduino on raspi

#inotool
http://inotool.org/

#bash script:

rm -rf /tmp/raspDuino/
cd /tmp/
git clone https://github.com/labos-medialab/raspDuino.git

cd /tmp/raspDuino
ino build
ino upload
ino clean
Voilà!
