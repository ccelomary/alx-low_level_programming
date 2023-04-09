#include "main.h"
/**
 * read_textfile - function that reads given number of letters from the file
 *
 * @filename: the path of the file to read from
 * @letters: the number of letters or characters to read from the file
 * Return: number of characters that's been written
 */
ssize_t		read_textfile(const char *filename, size_t letters)
{
	int			fd;
	char		buffer[4096];
	ssize_t		number_of_read_letters;
	ssize_t		number_of_written_letters;

	fd = open(filename, O_RDONLY);
	if (fd == FILE_FAILURE)
		return (0);
	number_of_read_letters = read(fd, buffer, letters);
	close(fd);
	if (number_of_read_letters == FILE_FAILURE)
		return (0);
	number_of_read_letters = write(STDOUT_FILENO, buffer,
									MIN(letters, number_of_read_letters));
	if (number_of_read_letters == FILE_FAILURE)
		return (0);
	return (number_of_read_letters);
}
