cat /etc/passwd | cut -f 1 -d ':' | grep -v ^# | sed -n 'n;p' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr -s '\n' "," | sed 's/,/, /g'| rev | sed 's/,/./' | rev | sed 's/.$//'
