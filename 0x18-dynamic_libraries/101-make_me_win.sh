#!/bin/bash
gcc -fPIC -shared -o libtest.so test.c
LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9
