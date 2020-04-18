#!/bin/bash

echo "Running all tests..."

cd build
ctest --output-on-failure
cd ..
