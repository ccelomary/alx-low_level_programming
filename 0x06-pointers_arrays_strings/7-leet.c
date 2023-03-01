/**
 * leet - function that encodes a string into 1337
 *
 * @str: string to encode
 * Return: str
 */
char	*leet(char *str)
{
	int	iter;
	int	nested;
	char	lower[] = "aeotl";
	char	upper[] = "AEOTL";
	char	code[] = "43071";

	iter = 0;
	while (str[iter])
	{
		nested = 0;
		while (lower[nested])
		{
			if (lower[nested] == str[iter] || upper[nested] == str[iter])
			{
				str[iter] = code[nested];
				break;
			}
			nested++;
		}
		iter++;
	}
	return (str);
}
