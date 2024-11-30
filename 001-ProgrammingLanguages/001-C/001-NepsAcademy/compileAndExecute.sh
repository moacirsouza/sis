#!/bin/bash

output=$(echo "${1}" | tr -d "c.")
gcc $1 -o ${output}.out && ./${output}.out
cat $1
