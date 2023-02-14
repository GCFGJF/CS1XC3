#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"

filename=${3:-file1.txt}

if [ "$2" -eq 1 ]; then
    if [ ! -f $filename ]; then
        touch $filename && echo $USER > $filename
    fi

elif [ "$2" -eq 2 ] ; then
    if [ -f $filename ]; then
	if [ ! -d backup ]; then
            mkdir backup
        fi
        cp $filename backup
    fi

elif [ "$2" -eq 3 ]; then
    if [ -f backup/$filename ]; then
	cp -f backup/$filename $filename
	rm -f backup/$filename
    fi
fi

if [ "$#" -gt 3 ]; then
    echo "" > excess.txt
    for (( i=4; i<=$#; i++ )); do
	echo "${!i}" >> excess.txt
    done
fi
echo "Finished"
