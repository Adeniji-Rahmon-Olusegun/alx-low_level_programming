#!/bin/bash
gcc -c *.c | ar -rsc liball.a | ranlib liball.a
