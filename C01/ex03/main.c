#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a  = 10;
	int b  = 20;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	
	printf("%d\n",*div);
	printf("%d\n",*mod);
}
