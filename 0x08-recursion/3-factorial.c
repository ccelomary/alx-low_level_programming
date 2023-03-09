/**
 * factorial - factorial of n
 *
 * @n: the number to calcualte its factorial
 * Return: factorial of n
 */
int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
