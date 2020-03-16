#!/bin/bash
output=""
for i in $@
do
    output+="$i,"
done
curl -sL https://www.gitignore.io/api/${output::-1}
