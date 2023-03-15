/**
 * _strlen - count length of the array
 *
 * @s: string parameter
 * Return: size of strlen
 */

int	_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
