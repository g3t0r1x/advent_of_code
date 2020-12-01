#!/bin/bash

echo "Building advent_of_code project..."

if [[ $1 == "--dbg" ]]; then
    export MY_CXXFLAGS="-D DBG_ENABLED"
fi

export CC=/usr/local/gcc-8.2/bin/gcc-8.2
export CXX=/usr/local/gcc-8.2/bin/g++-8.2

mkdir -p build
cd build
cmake ..
make -j
cd ..
