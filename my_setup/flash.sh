#!/bin/bash

#Commands to execute a flash 

# Check if a filename is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

filename=$1

# Check if the file exists
if [ ! -e "$filename" ]; then
    echo "Error: File '$filename' not found."
    exit 1
fi

# Perform a command using the filename (e.g., cat)
qmk flash $filename
