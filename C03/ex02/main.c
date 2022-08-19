#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char *dest;
	char *src;	
	char s1[] = "hello ";
	char s2[] = "world";
	
	dest = s1;
	src = s2;

	printf("%s\n", ft_strncat(dest, src, 2));
	return (0);
}
