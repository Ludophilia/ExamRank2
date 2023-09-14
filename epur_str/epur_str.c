#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	word;

	i = -1;
	word = 0;
	while (str[++i])
	{
		if (!(str[i] == 9 || str[i] == 11 || str[i] == 32))
		{
			if (word)
			{
				write(1, " ", 1);
				word = 0;
			}
			write(1, str + i, 1);
			if (str[i + 1] == 9 || str[i + 1] == 11 || str[i + 1] == 32)
				word = 1;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}
