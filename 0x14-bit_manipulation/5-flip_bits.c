#include "main.h"
/**
 * flip_bits - function that takes two integers and return number of flips
 *
 * @n: first number
 * @m: second number
 * Return: number of flipped bits so that all number will be the same
 */
unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	int				iter;
	unsigned int	count;

	iter = 0;
	count = 0;
	while (iter <= UNSINED_INT_LENGTH)
	{
		count += ((n >> iter) & 1) != ((m >> iter) & 1);
		iter++;
	}
	return (count);
}
