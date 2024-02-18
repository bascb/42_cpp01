#! /usr/bin/bash

# Define colors to use
DEFAULT="\033[0m"
BLACK="\033[30m"
RED="\033[31m"
GREEN="\033[32m"
BLUE="\033[34m"
YELLOW="\033[33m"
CYAN="\033[36m"

if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <path to folder with text files> <string to replace> <substitute string>"
    exit 1
fi

TEXTS_FOLDER="$1"
STRING1="$2"
STRING2="$3"
FILES_LIST=()

if [ -d "$TEXTS_FOLDER" ]; then
	rm $TEXTS_FOLDER/*.sed
	rm $TEXTS_FOLDER/*.replace
    
    for FILE in "$TEXTS_FOLDER"/*; do
        if [ -f "$FILE" ]; then
            FILES_LIST+=("$FILE")
        fi
    done

	for FILE in "${FILES_LIST[@]}"; do
		sed "s/$STRING1/$STRING2/g" $FILE > $FILE.sed
		./micro_sed "$FILE" "$STRING1" "$STRING2"
		DIFF=$(diff -U 3 $FILE.sed $FILE.replace)
		printf "$FILE:"
    	if [ "$DIFF" != "" ]; then
        	printf "${RED} KO ${DEFAULT}"
    	else
        	printf "${GREEN} OK ${DEFAULT}"
		fi
		printf "\n"
	done
else
    echo "Folder not found: $TEXTS_FOLDER"
fi