#!/bin/bash

# collect commit message
read -p 'commit msg: ' msg

# git cmds start here
git add .

git commit \-m "$msg"

git push

# Pushes all files in the current directory
