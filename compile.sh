#!/bin/bash

echo "Building advent_of_code project..."

export CC=/usr/local/gcc-8.2/bin/gcc-8.2
export CXX=/usr/local/gcc-8.2/bin/g++-8.2

mkdir -p build
cd build
cmake ..
make
cd ..
