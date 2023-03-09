/**
 * is_prime_number_helper - checks whether the given number or not
 *
 * @n: number to check against
 * @y: the divider number
 * Return: true or false
 */
int	is_prime_number_helper(int n, int y)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3 || y > n / 2 + 1)
		return (1);
	if (n % y == 0)
		return (0);
	return (is_prime_number_helper(n, y + 1));
}

/**
 * is_prime_number - check wheter the number is prime or not
 *
 * @n: number to check against
 * Return: true or false
 */
int	is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
