#!/bin/bash

if [ ! -d "./googletest" ]; then
    echo "Cloning googletest repository..."
    git submodule add https://github.com/google/googletest googletest
fi

if [ ! -d "./src/logger" ]; then
    echo "Cloning logger repository..."
    cd src
    git submodule add https://github.com/g3t0r1x/logger utils
    cd ..
fi
