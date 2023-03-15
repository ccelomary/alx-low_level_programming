/**
 * _strcmp - function that compare two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int	_strcmp(char *s1, char *s2)
{
	int	iter;

	iter = 0;
	while (s1[iter] &&  s2[iter] && s1[iter] == s2[iter])
		iter++;
	return (s1[iter] - s2[iter]);
}
