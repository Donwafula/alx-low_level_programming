#!/bin/bash
gcc -shared -o libjackpot.so -fPIC -Wl,--no-as-needed -ldl jackpot.c && LD_PRELOAD=./libjackpot.so
