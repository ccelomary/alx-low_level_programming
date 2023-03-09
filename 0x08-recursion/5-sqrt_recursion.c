/**
 * _sqrt_recursion_helper - function helper for calcuating sqrt
 *
 * @n: the number which we are looking for it's square root
 * @y: the number to test if its power raised to 2 equal to n
 * Return: sqrt root of number;
 */
int	_sqrt_recursion_helper(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (_sqrt_recursion_helper(n, y + 1));
}
/**
 * _sqrt_recursion - the function return the square root of n
 *
 * @n: the number to caluculate its square root
 * Return: the square root of number if it exist else -1
 */
int	_sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0));
}
