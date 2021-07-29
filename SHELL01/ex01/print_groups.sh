#!/bin/sh
groups $FT_USER | tr ' ' ',' |  tr -d '\n'

# tr -d \\n remove a quebra de linha
