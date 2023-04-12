#include "main.h"

/**
 * create_file - this creates the file.
 *
 * @filename: pointer to the name of file to be created.
 *
 * @text_content: pointer to the string to write to the file created.
 *
 * Return: if function fails - -1.
 *         else - 1.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
/**
 * the end of my code for 1-create_file.c
 */
