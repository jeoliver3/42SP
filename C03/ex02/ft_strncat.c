char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int x = 0;
	unsigned int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while ((y < nb) && (src[y] != '\0'))
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
