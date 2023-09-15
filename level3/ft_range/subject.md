# Subject

Write a function ft_range that allocate an array, write into it every
consecutive values from start to end.

Authorized functions: malloc().

## Prototype

int *ft_range(int start, int end);

## Examples

(0, 0) -> [0]
	size: (end - start) + 1 = (0 - 0) + 1 = 1

(1, 10) -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
	size: (end - start) + 1 = (10 - 1) + 1 = 10

(-1, 3) -> [-1, 0, 1, 2, 3]
	size: (end - start) + 1 = (3 - -1) + 1 = 5 

(-1, 0) -> [-1, 0]
	size: (end - start) + 1 = (0 - -1) + 1 = 2 

(0, -3) -> [0, -1, -2, -3]
	size: start > end -> swap ; (end - start) + 1 = (0 - -3) + 1 = 4

(3, -3) -> [3, 2, 1, 0, -1, -2, -3]
	size: start > end -> swap ; (end - start) + 1 = (3 - -3) + 1 = 7

(-10, -3) -> [-10, -9, -8, -7, -6, -5, -4, -3]
	size: (end - start) + 1 = (-3 - -10) + 1 = 8

## Examples and exceptions

(214783647, 214783647) -> [214783647]
	size: (end - start) + 1 = (214783647 - 214783647) + 1 = 1

(214783647, 214783648) -> (214783647, -214783648) -> [214783647, ..., -2147483648]
	size: (end - start) + 1 = (214783647 - -214783648) + 1 = 4,294,967,296 (
	too much for a uint, ok for a size_t).
