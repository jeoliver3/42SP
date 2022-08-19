int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	y;
	int	upper;

	x = 0;
	upper = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if (y >= 65 && y <= 90)
		{
			upper = 1;
		}
		else
		{
			upper = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
