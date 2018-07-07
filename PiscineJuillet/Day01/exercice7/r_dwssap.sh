#!/bin/sh

cat  /etc/passwd | grep -v '#' | sed "1 d;n;d" | cut -d : -f 1,10 | rev | sort -r | awk 'NR > 0 {for (n="$FT_LINE1";o="FT_LINE2";n<=NR;o>=NR) {print $NF}}'
