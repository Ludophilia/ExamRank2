int	ft_atoi(const char *str)
{
	int	res[2];
	int	i;

	*(long *)res = 1l;
	i = 0;
	while (str[i] >= '\t' && str[i] <= '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			res[0] *= -1;
		i++; 
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res[1] = 10 * res[1] + str[i] - '0';
		i++;
	}
	return (res[0] * res[1]);
}
