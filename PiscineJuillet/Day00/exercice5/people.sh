ldapsearch "uid=z*" cn | grep -a cn | sed 's/cn://' | sort -rf