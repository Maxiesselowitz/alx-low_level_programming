#include "main.h"
#include <stdlib.h>

/**
 * array_range - it creates values from min included to max
 *
 * @min: the values included to max
 *
 * @max: the values from min
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)

{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
