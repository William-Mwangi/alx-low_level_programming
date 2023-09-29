#!/bin/bash

c_files=$(find . -maxdepth 1 -name "*.c")

for file in $c_files; do
    gcc -c "$file"
done

ar rcs liball.a *.o

rm -f *.o
