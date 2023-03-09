#!/bin/bash
if [ $# -eq 0 ]; then
  echo "Please provide the path to the shared object library as the first argument, the purpose is to compile a program using the rpath option."
  exit 1
fi

library_file="$1"

gcc -L"$library_file" -Wl,-rpath="$library_file" -Wall -o test top.c -lLab6Part5