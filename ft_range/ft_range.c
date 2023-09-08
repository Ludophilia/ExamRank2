#include "ft_range.h"

static void	fill_range(int start, int end, int *range, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (start <= end)
			range[i] = start + i;
		else
			range[i] = start - i;
		i++;
	}
}

size_t	calculate_size(int start, int end)
{
	if (end < start)
		return (((size_t)start - end) + 1);
	else
		return (((size_t)end - start) + 1);
}

int	*ft_range(int start, int end)
{
	size_t	size;
	int		*range;

	size = calculate_size(start, end);
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	fill_range(start, end, range, size);
	return (range);
}
