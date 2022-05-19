cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort --reverse  | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | perl -pe 's/\n/, /g' | sed 's/..$/./' | tr -d '\n'
