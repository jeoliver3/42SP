int	ft_str_is_numeric(char *str)
{
	int	x;
	int	y;
	int	num;

	x = 0;
	num = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if (y >= 48 && y <= 57)
		{
			num = 1;
		}
		else
		{
			num = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
