/**
 * _strcat - function add the src string to the dest
 *
 * @dest: dest string in which the string src will be added
 * @src: src string is the source thar will be added to dest
 * Return: whatever dest is
 */
char	*_strcat(char *dest, char *src)
{
	int	start;
	int	s_iter;

	start = 0;
	while (dest[start])
		start++;

	s_iter = 0;
	while (src[s_iter])
	{
		dest[start + s_iter] = src[s_iter];
		s_iter++;
	}
	dest[start + s_iter] = 0;
	return (dest);
}
