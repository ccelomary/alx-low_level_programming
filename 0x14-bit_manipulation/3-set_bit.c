#include "main.h"
/**
 * set_bit - function that sets bit in given position for a number
 *
 * @n: number to set bit inside
 * @index: position of the bit
 * Return: 1 in success or -1 if an error occur
 */
int		set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int		mask;

	mask  = 1 << index;
	if (index > UNSINED_INT_LENGTH || !n)
		return (-1);
	*n = *n | mask;
	return (1);
}
