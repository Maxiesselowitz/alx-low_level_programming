#include "main.h"

/**
 * set_bit - a program that sets the value of a bit to 1 at a given index
 *
 * @n: the number to set
 *
 * @index: the index to set the bit
 *
 * Return: 1 if it succeeds, OR -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setbit = 1 << index;
	*n = *n | setbit;

	return (1);
}
