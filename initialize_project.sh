#!/bin/bash

echo "Cloning googletest repository... " -n
git clone https://github.com/google/googletest
echo "DONE"

echo "Cloning logger repository... " -n
cd src
git clone https://github.com/g3t0r1x/logger
cd ..
echo "DONE"