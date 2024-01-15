#!/bin/bash

# Collect all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile the .c files into an object files
gcc -c -fPIC $c_files

# Check if the compilation was successful
if [ $? -ne 0 ]; then
  echo "Failed to compile the .c files."
  exit 1
fi

# Create the dynamic library
gcc -shared -o liball.so *.o

# Check if the library creation was successful
if [ $? -ne 0 ]; then
  echo "Failed to create the dynamic library."
  exit 1
fi

# Cleanup intermediate object files
rm -f *.o

echo "Dynamic library liball.so created successfully."
