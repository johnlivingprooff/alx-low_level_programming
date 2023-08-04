#!/bin/bash

# collect commit message
read -p 'commit msg: ' msg

# git cmds
git add .

git commit \-m "$msg"

git push
