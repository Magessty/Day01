
#!/bin/sh
echo `cat /etc/passwd | grep -v '#' | sed "1 d;n;d" | cut -d : -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2"` | tr '\n' '.'  | sed 's/ /, /g' | awk 1 ORS=''