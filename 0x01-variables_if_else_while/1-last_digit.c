#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * Return: always success (0)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d and ", n, last_digit);
	if (last_digit > 5)
	{
		printf("is greater than 5");
	}
	else if (last_digit == 0)
	{
		printf("is 0");
	}
	else
	{
		printf("is less than 5");
	}
	printf("\n");
	return (0);
}
