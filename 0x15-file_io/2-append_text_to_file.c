#include "main.h"

/**
 * append_text_to_file - Appends text to end of file.
 * @filename: Name of the file.
 * @text_content: Null terminated string to add at end of file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL) /* Check if filename is valid */
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND); /* Open file in append mode */

	if (fd == -1) /* Check if file exists and can be opened */
		return (-1);

	if (text_content != NULL) /* Get length of text content */
	{
		while (text_content[len])
			len++;
	}

	w = write(fd, text_content, len); /* Write text content to file */

	if (w == -1) /* Check if write was successful */
		return (-1);

	close(fd); /* Close file */

	return (1);
}
