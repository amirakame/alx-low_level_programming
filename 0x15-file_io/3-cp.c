#include "main.h"

/**
 * error_exit - Prints error message and exits program.
 * @code: Exit code.
 * @msg: Error message.
 *
 * Return: Nothing.
 */
void error_exit(int code, char *msg)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}

/**
 * cp_file - Copies content of file_from to file_to.
 * @file_from: Name of file to copy from.
 * @file_to: Name of file to copy to.
 *
 * Return: 1 on success, -1 on failure.
 */
int cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY); /* Open file_from in read only mode */

	if (fd_from == -1) /* Check if file exists and can be opened */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (-1);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664); /* Open file_to in write mode */

	if (fd_to == -1) /* Check if file can be created or opened */
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (-1);
	}

	while ((r = read(fd_from, buffer, 1024)) > 0) /* Read from file_from */
	{
		w = write(fd_to, buffer, r); /* Write to file_to */

		if (w != r) /* Check if write was successful */
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (-1);
		}
	}

	if (r == -1) /* Check if read was successful */
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (-1);
	}

	r = close(fd_from); /* Close file_from */
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (-1);
	}

	r = close(fd_to); /* Close file_to */
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}

	return (1);
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: 0 on success, 97-100 on failure.
 */
int main(int ac, char **av)
{
	int cp;

	if (ac != 3) /* Check if number of arguments is valid */
		error_exit(97, "Usage: cp file_from file_to\n");

	cp = cp_file(av[1], av[2]); /* Copy file */

	if (cp == -1) /* Check if copy was successful */
		return (99);

	return (0);
}
