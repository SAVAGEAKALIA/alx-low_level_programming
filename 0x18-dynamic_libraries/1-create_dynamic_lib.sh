#!/bin/bash
gcc -fPIC -shared -o liball.so *.c 
#gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c
#gcc -shared -o liball.so *.o

#rm *.o
