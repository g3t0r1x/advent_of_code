#!/bin/bash

if [ ! -d "./googletest" ]; then
    echo "Cloning googletest repository..."
    git submodule add -f https://github.com/google/googletest googletest
fi

if [ ! -d "./src/utils/logger" ]; then
    echo "Cloning logger repository..."
    cd src
    git submodule add -f https://github.com/g3t0r1x/logger utils/logger
    cd ..
fi
