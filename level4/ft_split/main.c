#include "ft_split.h"

void	print_strs(char **strs)
{
	while (*strs)
	{
		printf("'%s'\n", *strs);
		strs++;
	}
}

void	free_strs(char **strs)
{
	char	**strs_o;

	strs_o = strs;
	while (*strs)
	{
		free(*strs);
		strs++;
	}
	free(strs_o);
}

int	main(int argc, char **argv)
{
	char	**strs;

	if (argc != 2)
		return (1);
	printf("ft_split('%s'):\n", argv[1]);
	strs = ft_split(argv[1]);
	print_strs(strs);
	free_strs(strs);
}
