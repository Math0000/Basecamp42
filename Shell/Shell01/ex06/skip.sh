#!/bin/bash

 ls -l | sed -n '1,${p;n}'

 ls -l | sed -n 'n;p'

 ls -l | sed 'n;d'