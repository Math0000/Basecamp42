#!/bin/sh
FT_LINE1=7
FT_LINE2=15
awk -F":" 'NR % 2 == 0 {print $1}' /etc/passwd | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' "," |   sed 's/,$/./g; s/,/, /g'

#Escreva uma linha de comando que exiba a saída de um cat /etc/passwd 
#retirando os comentários
#uma linha a cada duas começando pela segunda
#invertendo cada login
#ordenando em ordem alfabética inversa
#mantendo apenas os logins compreendidos entre FT_LINE1 e FT_LINE2 inclusos
#separados por ", "
#terminando com ".".
