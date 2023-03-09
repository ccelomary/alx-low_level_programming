/**
 * _pow_recursion - calculate the power
 *
 * @x: the number to calculate its own power
 * @y: exponent how many time should we multiply the number by itself
 * Return: x raised to power y (x^y)
 */

int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
