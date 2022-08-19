#include <stdio.h>
char*	ft_strlowcase(char*str);
int	main(void)
{
	char before[] = "AAAA";
	printf("before: %s\n", before);
	printf("after: %s\n", ft_strlowcase(before));
	return (0);
}
