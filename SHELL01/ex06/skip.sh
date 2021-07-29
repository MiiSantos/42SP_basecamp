#!/bin/bash
ls -l | sed -n 'p;n'

#sed -n = suprime todas as saídas que não são impressas explicitamente.
#'p;n' = é o script sed a ser executado em cada linha de entrada. O ponto-e-vírgula é um separador entre dois comandos p e n.
#p = imprime a linha atual, sem mover para a próxima linha.
#n = passa para a próxima linha sem imprimir nada.
