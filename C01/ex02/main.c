#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main()
{
	int	x;
	int	a = 10;
	int	b = 20;
	
	ft_swap(&a, &b);
	printf("%d %d\n", a , b);
}


