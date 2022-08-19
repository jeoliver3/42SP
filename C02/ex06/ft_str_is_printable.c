int	ft_str_is_printable(char *str)
{
	int	x;
	int	y;
	int	printable;

	x = 0;
	printable = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if (y > 31 && y < 127)
		{
			printable = 1;
		}
		else
		{
			printable = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
