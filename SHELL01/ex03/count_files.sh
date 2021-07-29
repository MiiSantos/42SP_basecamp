#!/bin/sh
find . -type f -o -type d | wc -l | sed 's: ::g'

#Compare a expressão regular com o conteúdo do espaço do padrão. 
#Se encontrado, substitua a seqüência correspondente por substituição.
# s realiza substituições, g substitui todas as opções, não só a primeira