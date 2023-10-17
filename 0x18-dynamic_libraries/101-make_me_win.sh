#!/bin/bash
echo -e '#define _GNU_SOURCE\n#include <stdio.h>\n#include <stdlib.h>\n#include <dlfcn.h>\n\nint rand(void) { return 9; }' > libjackpot.c && gcc -shared -o libjackpot.so -fPIC -Wl,--no-as-needed -ldl libjackpot.c
