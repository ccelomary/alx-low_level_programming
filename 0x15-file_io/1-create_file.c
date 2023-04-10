#include "main.h"

/**
 * _strlen - function returns the length of the given string of letters
 *
 * @s: string
 * Return: length of the string
 */
static size_t		_strlen(const char *s)
{
	size_t		len;

	len = 0;
	if (!s)
		return (0);
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * create_file - function that will create file and fill it with given content
 *
 * @filename: name to create file with
 * @text_content: text to put in the file
 * Return: 1 if the file created successfully or -1 in case of error
 */
int		create_file(const char *filename, char *text_content)
{
	int			fd;
	ssize_t		number_of_written_letters;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, USER_RW);
	if (fd == FILE_FAILURE)
		return (FAIL);
	number_of_written_letters = write(fd, text_content,
									_strlen(text_content));
	close(fd);
	if (number_of_written_letters == FILE_FAILURE)
		return (FAIL);
	return (SUCCESSED);
}
