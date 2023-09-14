#! /bin/bash

cc epur_str.c -o epur_str

./epur_str | cat -e
./epur_str "" | cat -e
./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e

echo

./epur_str "See? It's easy to print the same thing" | cat -e
./epur_str " this        time it      will     be    more complex  . " | cat -e