#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -rsc liball.a *.o
ranlib liball.a
