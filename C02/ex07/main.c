#include <stdio.h>
#include <string.h>

char*	ft_strupcase(char*str);
int	main(void)
{
	char before[] = "jessica";
	printf("before: %s\n", before);
	printf("after: %s\n", ft_strupcase(before));
	return (0);
}
