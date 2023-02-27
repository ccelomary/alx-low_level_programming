#include "main.h"

/**
 * rev_string - function that reverse string
 *
 * @s: string to reverse
 * Return: void
 */
void	rev_string(char *s)
{
	int	left;
	int	right;
	char	c;

	left = 0;
	while (s[right])
		right++;
	right -= 1;
	while (left < right)
	{
		c = s[left];
		s[left] = s[right];
		s[right] = c;
		left++;
		right--;
	}
}
