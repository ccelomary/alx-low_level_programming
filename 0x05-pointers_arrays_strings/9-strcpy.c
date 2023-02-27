/**
 * _strcpy - function that copies the src string int dest
 *
 * @dest: the place that will hold copied string
 * @src: the string to copy from
 * Return: dest or  the copied string
 */

char	*_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
