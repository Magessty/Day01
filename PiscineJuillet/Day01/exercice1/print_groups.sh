#!/bin/sh
echo $FT_USER | id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'