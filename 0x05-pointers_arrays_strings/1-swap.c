/**
 * swap_int - function that swaps two integer
 *
 * @a: pointer to first num address
 * @b: pointer to second num address
 * Return: void
 */
void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
