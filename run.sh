#!/bin/sh
TIMEFORMAT='%Rs'
file_name=$(basename .bin/$1)
mkdir -p .bin && \
    time g++ -Wfatal-errors -o .bin/$file_name $1.cpp && \
    ./.bin/$file_name
