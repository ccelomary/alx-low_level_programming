/**
 * clear_bit - function that sets bit of given position in @n to 0
 *
 * @n: number to set bit in
 * @index: position in which the we will set bit to 0
 * Return: 1 success -1 other ways
 */
int		clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int	result;

	if (!n || index > 32)
		return (-1);
	result = 1 << index;
	*n = (*n | result) ^ result;
	return (1);
}
