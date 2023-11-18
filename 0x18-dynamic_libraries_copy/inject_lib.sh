#!/bin/bash

script=$1 # full path of calling script
lib=$(realpath ../../libhack.so)
if [[ ! -f $lib ]]; then
	wget https://raw.githubusercontent.com/michaeliyke/alx-low_level_programming/master/0x18-dynamic_libraries_copy/libhack.so -P ..
fi
export LD_PRELOAD="$lib"
