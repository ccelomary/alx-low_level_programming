/**
 * get_bit - function return bit of given position(index)
 *
 * @n: number to look up in
 * @index: position for specific bit
 * Return: bit of given position
 */
int				get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index == 0)
		return (0);
	while (n)
	{
		if (index == 0)
			return (n & 1);
		index--;
		n = n >> 1;
	}
	return (-1);
}
