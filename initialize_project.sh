#!/bin/bash

if [ ! -d "/googletest" ]; then
    echo "Cloning googletest repository..."
    git clone https://github.com/google/googletest
fi

if [ ! -d "/src/logger" ]; then
    echo "Cloning logger repository..."
    cd src
    git clone https://github.com/g3t0r1x/logger
    cd ..
fi
