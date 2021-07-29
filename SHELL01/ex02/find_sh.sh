#!/bin/sh
find . -type f -name '*.sh' -execdir basename {} .sh ';'

# elimina o nome do dir, executa os comandos nos diretórios que contêm o destino correspondente.