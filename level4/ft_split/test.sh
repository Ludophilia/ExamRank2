#! /bin/bash

cc -g3 main.c ft_split.c -o ft_split

# ./ft_split "lol"
# ./ft_split "lol "

# valgrind --leak-check=full ./ft_split " "
valgrind ./ft_split "$1"

# ./ft_split "b "
# ./ft_split "b c"
# ./ft_split "b c "
# ./ft_split " b c "

# ./ft_split ""
# ./ft_split "  "
