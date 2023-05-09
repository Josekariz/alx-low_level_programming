#include "main.h"

/**
 * create_file - Makes  a file.
 * @filename: A pointer to name of file.
 * @text_content: A pointer to string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, lent);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
