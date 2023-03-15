/**
 * _memcpy - function that copies whatever in source to destination
 *
 * @dest: buffer that will receive whatever in source
 * @src: buffer to copy the buffer from
 * @n: size to be copied from src
 * Return: dest
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
