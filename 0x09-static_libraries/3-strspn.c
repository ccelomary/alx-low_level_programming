/**
 * is_inset - function check wether character c is in set or not
 *
 * @c: character to lookup for
 * @set: set of character to search from
 * Return: true if c found in set else false
 */
int	is_inset(char c, char *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}
/**
 * _strspn - calculate the number of character matched chars  in accept
 *
 * @s: first buffer
 * @accept: the buffer containing the character to match
 * Return: length of sequence with longest matching character
 */
unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	current;
	int		index;

	index = 0;
	current = 0;
	while (s[index])
	{
		if (is_inset(s[index], accept))
			current++;
		else
			break;
		index++;
	}
	return (current);
}

