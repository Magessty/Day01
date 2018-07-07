ldapsearch 'sn=*bon*' | sed -n '/numEntries/p' |  sed -e 's/[^0-9]//g' | sed '/^$/d'
