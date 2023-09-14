int	ft_strlen(char *str)
{
	int	size;

	size = -1;
	while (str[++size])
		;
	return (size);
}
