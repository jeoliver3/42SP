#include <stdio.h>

int ft_strlen(char *str)
{
	int	x = 0;

	while(str[x] != '\0')
{
	x++;
}
	printf("%d\n", x);
        return(x);      
}
