double	ft_atof(char *str)
{
	int		i;
	double	neg;
	double	num;
	double	dnum;

	neg = 1;
	i = 0;
	num = 0;
	dnum = 0.1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i++] - '0';
	if (str[i] == '.')
	{
		i++;
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			num += (dnum * (str[i++] - '0'));
			dnum /= 10;
		}
	}
	return (neg * num);
}
