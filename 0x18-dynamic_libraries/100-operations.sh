#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c add.c sub.c div.c mod.c mul.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o 100-operations.so add.o sub.o mul.o mod.o div.o
