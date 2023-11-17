#!/bin/bash

script=$1 # full path of calling script
if [[ ! -f ../libhack.so ]]; then
	wget https://raw.githubusercontent.com/michaeliyke/alx-low_level_programming/master/0x18-dynamic_libraries_copy/libhack.so -P ..
fi
fp=$(echo realpath "../libhack.so")
echo "export LD_PRELOAD=$fp" >> ~/.bashrc
source ~/.bashrc
echo $LD_PRELOAD
