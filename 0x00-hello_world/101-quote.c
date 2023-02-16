#include <unistd.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Return: Always 1 (Failure)
 */
int	main(void)
{
	char *quote;

	quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, sizeof(char) * strlen(quote));
	return (1);
}
