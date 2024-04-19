#!/bin/bash

#Define the pattern
PATTERN="*.main.c"

#Find files matching the pattern
FILES=$(find . -type f -name "$PATTERN")

#Append files to .gitignore
for FILE in $FILES; do
	echo "$FILE" >> .gitignore
done

echo "Files successfully appended to .gitignore"
