#include "main.h"

/**
 * flip_bits - it counts the number of bits to change to
 * get from one number to another
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int r, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		current = exclusive >> r;

		if (current & 1)
			countbit++;
	}

	return (countbit);
}
