/**
 * _strncat - append the n characters from src to the dest string
 *
 * @dest: string to append src to
 * @src: string that will be appended to the dest
 * @n: integer number of character that will be added to dest
 * Return: dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	start;
	int	s_iter;

	start = 0;
	s_iter = 0;
	while (dest[start])
		start++;
	while (s_iter < n && src[s_iter])
	{
		dest[start + s_iter] = src[s_iter];
		s_iter++;
	}
	return (dest);
}
