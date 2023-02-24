#include <stdio.h>

/**
 * main - Entry level of our fizz-buzz
 *
 * Return: zero success
 */
int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);
		if (number != 100)
			printf(" ");
		number++;
	}
	printf("\n");
	return (0);
}
