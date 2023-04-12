#include "main.h"
/*
 * set_bit - at a given index, a bit is set to 1
 *
 * @n: a pointer to the number to be changed.
 *
 * @index: the index.
 *
 * Return: 1 if success, otherwise -1.
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
/* the code ends */
