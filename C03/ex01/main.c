#include <stdio.h>
#include <string.h>

char	ft_strcat(char *dest, char *src);

int	main()
{
	char dest[] = "hello";
	char src[] = " world";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
