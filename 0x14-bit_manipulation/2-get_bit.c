#include "main.h"
/*
 * get_bit - this returns the value of a bit.
 *
 * @n: the number.
 *
 * @index: the index.
 *
 * Return: the bit value.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
/* the end of the code for 2-get_bit.c */
