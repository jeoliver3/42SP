char	*ft_strlowcase(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if ((y >= 65 && y <= 90))
		{
			str[x] = y + 32;
		}
		x++;
	}
		return (str);
}
