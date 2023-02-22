#include "main.h"


int		main(void)
{
	int	a;
	int	b;
	int	c;
	int	largest;

	a = 16;
	b = 20;
	c = 22;

	largest = largest_number(a, b, c);
	printf("%d\n", largest);
	largest = largest_number(b, a, c);
	printf("%d\n", largest);
	largest = largest_number(c, b, c);
	printf("%d\n", largest);
	return (0);
}
