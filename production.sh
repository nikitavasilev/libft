#!/bin/bash

# moving all files to root
echo 'moving all files to root...'
mv ./srcs/* .
mv ./includes/libft.h .
sleep 2

# deleting all forbidden folders and files for production
echo 'Deleting all forbidden files and folders for production...'
rm -rf tests/ subjects/ includes/ srcs/ .gitignore README.md to_do.txt
sleep 2

# search and replace in C files -> old libft path to new one
echo 'Searching and replacing old libft path to new one in all C files...'
echo 'Checking OS TYPE...'

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
  echo "OS TYPE == LINUX"
  sed -i "s%../includes/libft.h%libft.h%g" *.c 
elif [[ "$OSTYPE" == "darwin"* ]]; then
  echo "OS TYPE == macOS"
  sed -i '' "s%../includes/libft.h%libft.h%g" *.c
elif [[ "$OSTYPE" == "freebsd"* ]]; then
  echo "OS TYPE == freeBSD"
  sed -i '' "s%../includes/libft.h%libft.h%g" *.c
else
  echo 'This script will work only on macOS, linux and BSD. Please adapt this script for your environment.'
fi

sleep 2

# Remove old Makefile and making a new one
echo 'Removing old Makefile and making a new one for production'
rm Makefile
mv mfile Makefile
sleep 2

echo 'PROJECT READY FOR PRODUCTION'
sleep 1

echo 'DELETING SCRIPT...'
echo 'DONE :)'
rm production