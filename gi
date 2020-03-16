#!/bin/bash
output=""
for i in $@
do
    output+=$i
    output+=","
done
curl -sL https://www.gitignore.io/api/${output::-1}
