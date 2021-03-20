#!/bin/sh
ma
find . -type f -name '*.sh' -exec basename {} \; | sed -r 's/.{3}$//g'
find . -type f -name '*.sh' -exec basename {} \; | sed -r 's/.sh$//g'
find . -type f -name '*.sh' -exec basename -s .sh {} \; 