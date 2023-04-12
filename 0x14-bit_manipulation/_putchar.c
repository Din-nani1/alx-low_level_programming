#include "main.h"
#include <unistd.h>
/*
 * _putchar - this writes a character 'c' to stdout.
 *
 * @c:character to be printed.
 *
 * Return: if success 1 , else -1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/* the end of my code for _putchar.c */
