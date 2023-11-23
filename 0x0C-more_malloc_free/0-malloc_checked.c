#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - to allocate memory
 *
 * @b: size to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)

{

	char *output;

	output = malloc(b);

	if (output == NULL)
		exit(98);

	else
		return (output);
}
