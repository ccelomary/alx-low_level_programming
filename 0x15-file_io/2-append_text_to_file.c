#include "main.h"
/**
 * _strlen - function that returns length of the string
 *
 * @s: string to calculate it's length
 * Return: length of the given string
 */
static size_t	_strlen(const char *s)
{
	size_t		len;

	if (!s)
		return (NULL);
	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - function that append given text to the end of the file
 *
 * @filename: the name of the file to append to
 * @text_content: text to be appended
 * Return: success (1), (-1) failure
 */
int		append_text_to_file(const char *filename, char *text_content)
{
	int			fd;
	ssize_t		number_of_written_letters;

	fd = open(filename, O_APPEND);
	if (fd == FILE_FAILURE)
		return (FAIL);
	number_of_written_letters = write(fd, text_content,
									_strlen(text_content));
	close(fd);
	if (number_of_written_letters == FILE_FAILURE)
		return (FAIL);
	return (SUCCESSED);
}
