#include "main.h"
/**
 * _print_rev_recursion_helper - is function that print string in reverse order
 *
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion_helper(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion_helper(++s);
	_putchar(*s);
}

/**
 * _print_rev_recursion - function that print given string in reverse order
 *
 * @s: string to be printed
 * Return: void
 */
void	_print_rev_recursion(char *s)
{
	_print_rev_recursion_helper(s);
	_putchar('\n');
}