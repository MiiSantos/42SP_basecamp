#!/bin/sh
git log -5 --pretty=%H

# git log lista commits, -5 limita aos últimos 5 commits, --pretty formata o commit 
# e o parametro %H seleciona só o hash.