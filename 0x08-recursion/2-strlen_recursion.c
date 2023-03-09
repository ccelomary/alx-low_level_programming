/**
 * _strlen_recursion - calcualte the length of the given string
 *
 * @s: the string to calaculate it's length
 * Return: length of the string
 */
int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
