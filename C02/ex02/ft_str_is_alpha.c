int	ft_str_is_alpha(char *str)
{
	int	x;
	int	y;
	int	alpha;

	x = 0;
	alpha = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if ((y >= 65 && y <= 90) || (y >= 97 && y <= 122))
		{
			alpha = 1;
		}
		else
		{
			alpha = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
