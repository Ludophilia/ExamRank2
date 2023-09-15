#! /bin/bash

cc ft_atoi.c main.c -o ft_atoi

./ft_atoi ""
./ft_atoi "anananas"
./ft_atoi "-"
./ft_atoi "+"

echo

./ft_atoi "10"
./ft_atoi "1"
./ft_atoi "100"
./ft_atoi "1234"
./ft_atoi "123456789"

echo

./ft_atoi "-0"
./ft_atoi "-10"
./ft_atoi "-100"

echo

./ft_atoi "2147483647"
./ft_atoi "2147483648"
./ft_atoi "-2147483648"

echo

./ft_atoi "++2147483647"
./ft_atoi "--2147483647"
./ft_atoi "-- 2147483647"
./ft_atoi "-- 2147483647"
./ft_atoi " --2147483647"

echo

./ft_atoi "     42"
./ft_atoi "     +42"
./ft_atoi "     -2147483648"
./ft_atoi "     -2147483648"
./ft_atoi "     -2147483648"