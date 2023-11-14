#!/bin/bash
gcc -fPIC -shared -o libtest.so test.c
export LD_PRELOAD=$PWD/libtest.so
