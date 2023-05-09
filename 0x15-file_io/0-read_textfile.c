#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and print to STDOUT.
 * @filename: text file >> read
 * @letters: NO. of letters to be read
 * Return: w- actual NO. of bytes read and printed
 *        0 -when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t w;
	char *buff;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
