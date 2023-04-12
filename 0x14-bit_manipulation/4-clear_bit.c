#include "main.h"

/*
 * clear_bit - sets value for a given bit to 0.
 *
 * @n: a pointer to the number to be changed.
 *
 * @index: index of the bit.
 *
 * Return: returns 1 if successful,else -1.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
/* end of the code for 4-clear_bit.c */
