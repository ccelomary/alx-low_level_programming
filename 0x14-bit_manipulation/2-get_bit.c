/**
 * get_bit - function return bit of given position(index)
 *
 * @n: number to look up in
 * @index: position for specific bit
 * Return: bit of given position
 */
int				get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
