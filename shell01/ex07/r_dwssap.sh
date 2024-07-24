cat /etc/passwd | sed -e 's/ #.*//' | sed -e 's/:.*//' | sed -n 'p;n' | rev | sort -d -r | head -n +"$FT_LINE2" | tail -n +"$FT_LINE1"
