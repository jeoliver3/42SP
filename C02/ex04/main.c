#include <stdio.h>
int	ft_str_is_lowercase(char*str);
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("aaa"));
	printf("%d\n", ft_str_is_lowercase("aAaAa"));
	return (0);
}
