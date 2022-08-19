int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	y;
	int	lower;

	x = 0;
	lower = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if (y >= 97 && y <= 122)
		{
			lower = 1;
		}
		else
		{
			lower = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
