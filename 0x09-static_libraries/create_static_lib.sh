#!/bin/sh
ar -rc liball.a *.c
gcc -g -O -c *.c
ar -rc liball.a *.o
