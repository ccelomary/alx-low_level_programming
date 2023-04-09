#include "main.h"

/**
 * print_binary_helper - function helper to print binary of number
 *
 * @n: number to be printed in binary
 * Return: nothing
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_helper(n >> 1);
	_putchar((n & 1) + 48);
}
/**
 * print_binary - function that prints given number in binary
 *
 * @n: number to print in binary
 * Return: nothing
 */
void			print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	print_binary_helper(n);
}
