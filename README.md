raspDuino
=========

automagicali upload this code to arduino on raspi2 in #labOS

check how to install inotool
http://inotool.org/

ad simple bash script in bin dir:

#!/bin/bash
rm -rf /tmp/raspDuino/
cd /tmp/
git clone https://github.com/labos-medialab/raspDuino.git

cd /tmp/raspDuino
ino build
ino upload
ino clean

Voilà!
