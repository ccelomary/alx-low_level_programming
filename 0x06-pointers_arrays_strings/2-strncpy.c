/**
 * _strncpy - copy n character of the first string to the second
 *
 * @dest: the destination of the string
 * @src: the source where the characters will be copied
 * @n: the length of copied character
 * Return: dest string
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	iter;

	iter = 0;
	while (iter < n && src[iter])
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = 0;
	while (iter < n)
	{
		dest[iter] = '\0';
		iter++;
	}
	return (dest);
}
