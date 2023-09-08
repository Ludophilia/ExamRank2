#include <unistd.h>

char	rot_13(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ('A' + (13 + c - 'A') % 26);
	else if (c >= 'a' && c <= 'z')
		return ('a' + (13 + c - 'a') % 26);
	return (c);
}

void	encrypt_with_rot13(char *str)
{
	char c;

	c = 0;
	while (*str)
	{
		c = rot_13(*str);
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		argv++;
		encrypt_with_rot13(*argv);
	}
	write(1, "\n", 1);
}
