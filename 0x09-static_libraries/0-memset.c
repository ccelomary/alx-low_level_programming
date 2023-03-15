/**
 * _memset - function that fill buffer of memory with sepecific character
 *
 * @s: the buffer to fill
 * @b: the character to fill buffer with
 * @n: size length that should be filled
 * Return: buffer
 */
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
