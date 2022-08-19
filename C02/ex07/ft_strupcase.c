char	*ft_strupcase(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if ((y >= 97 && y <= 122))
		{
			str[x] = y - 32;
		}
		x++;
	}
	return (str);
}
