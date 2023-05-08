#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads textfile.
 *
 * @filename: Name of the file.
 * @letters: Number of letters to be printed.
 *
 * Return: The number of letters printed, or 0 if an error occured.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (!buffer)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
