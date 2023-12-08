#include "main.h"

/**
 * get_endianness - the program checks for the endianness
 *
 * Return: 0 if it is a big endian, 1 if it is a small endian
 */

int get_endianness(void)

{
	int r;
	char *m;

	r = 1;
	m = (char *)&r;

	return (*m);

}
