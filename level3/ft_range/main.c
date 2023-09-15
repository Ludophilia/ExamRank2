#include "ft_range.h"

void	print_range(int *range, int start, int end)
{
	size_t	i;
	size_t	size;

	size = calculate_size(start, end);
	i = 0;
	while (i < size)
		printf("%i\t", range[i++]);
	printf("\n");
}

int	main(int argc, char **argv)
{
	int startend[2];
	int	*range;

	if (argc != 3)
	{
		printf("Error.\n");
		return (1);
	}
	startend[0] = atoi(argv[1]);
	startend[1] = atoi(argv[2]);
	range = ft_range(startend[0], startend[1]);
	print_range(range, startend[0],startend[1]);
	free(range);
}
