#!/usr/bin/env sh

echo "Compiling numbersys.cpp..."
g++ -c -Wall -Wextra -pedantic -std=c++11 -fmessage-length=30 -fdiagnostics-color=always ./src/numbersys.cpp -I ./include/

echo "Compiling main..."
g++ -o main -Wall -Wextra -pedantic -std=c++11 -fmessage-length=30 -fdiagnostics-color=always main.cpp numbersys.o -I ./include

echo "Done..."
