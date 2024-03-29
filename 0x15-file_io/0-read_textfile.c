#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this reads the text file printed to STDOUT.
 *
 * @filename: this is the text file.
 *
 * @letters: number of letters in the file.
 *
 * Return: actual number of bytes that is read and printed
 *        0 when filename is NULL or function fails.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
/**
 * this the end of my code for 0-read_textfile.c
 **/
