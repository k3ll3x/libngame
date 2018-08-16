#!/bin/bash
gcc -c ngame.c #object created
ar rc libngame.a ngame.o
ranlib libngame.a
cp libngame.a ..
cd ..
make
