#include "main.h"
#define INVALID_NUMBER_OF_ARGUMENTS 97
#define FILE_DOES_NOT_EXIST 98
#define UNABLE_TO_WRITE 99
#define UNABLE_TO_CLOSE_FILE 100
#define BUFFER_SIZE 1024
#define URW_GRW_OR 00664
/**
 * close_file - function that close file and exit in case of error
 *
 * @fd: file descriptor
 * Return: nothing
 */
void	close_file(int fd)
{
	int		status;

	status = close(fd);
	if (status == FILE_FAILURE)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(UNABLE_TO_CLOSE_FILE);
	}
}

/**
 * copy - function that copies content of one file to another
 *
 * @input_fd: file where the data come from
 * @output_fd: file which will recieve data
 * @arguments: arguments provided by the user
 * Return: 0 on success or other specific values in case of error
 */
int		copy(const int input_fd, const int output_fd, char *arguments[])
{
	int			read_letters, written_letters;
	char		buffer[BUFFER_SIZE];

	while (1)
	{
		read_letters = read(input_fd, buffer, BUFFER_SIZE);
		if (!read_letters)
			break;
		if (read_letters == FILE_FAILURE)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arguments[1]);
			close_file(output_fd);
			close_file(input_fd);
			return (FILE_DOES_NOT_EXIST);
		}
		written_letters = write(output_fd, buffer, read_letters);
		if (written_letters == FILE_FAILURE)
		{
			dprintf(2, "Error: Can't write to %s\n", arguments[2]);
			return (UNABLE_TO_WRITE);
		}
	}
	close_file(output_fd);
	close_file(input_fd);
	return (0);
}

/**
 * main - entry level of the program
 *
 * @number_of_arguments: number of arguments provided by user
 * @arguments: arguments provided by user
 * Return: (0) success and others in case of failure
 */
int		main(int number_of_arguments, char *arguments[])
{
	int			input_fd, output_fd;

	if (number_of_arguments != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (INVALID_NUMBER_OF_ARGUMENTS);
	}
	input_fd = open(arguments[1], O_RDONLY);
	if (input_fd == FILE_FAILURE)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arguments[1]);
		return (FILE_DOES_NOT_EXIST);
	}
	output_fd = open(arguments[2], O_WRONLY | O_CREAT | O_TRUNC, URW_GRW_OR);
	if (output_fd == FILE_FAILURE)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arguments[2]);
		return (UNABLE_TO_WRITE);
	}
	return (copy(input_fd, output_fd, arguments));
}
