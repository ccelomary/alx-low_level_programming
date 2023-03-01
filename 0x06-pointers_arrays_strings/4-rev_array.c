/**
 * reverse_array - reverse an array of integers
 *
 * @a: array of interger
 * @n: length of the array
 * Return: nothing
 */
void	reverse_array(int *a, int n)
{
	int	left;
	int	tmp;

	left = 0;
	n -= 1;
	while (left < n)
	{
		tmp = a[left];
		a[left] = a[n];
		a[n] = tmp;
		n--;
		left++;
	}
}
