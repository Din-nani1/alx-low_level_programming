#include "main.h"

/*
 * get_endianness -it  checks if a machine is little endian or not.
 *
 * Return: 0 if big, and 1 if little
 *
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
/* end of the code */
