#!/bin/bash

echo "Building advent_of_code project..."

if [[ $1 == "--dbg" ]]; then
    export MY_CXXFLAGS="-D DBG_ENABLED"
fi

mkdir -p build
cd build
cmake ..
make -j
cd ..
