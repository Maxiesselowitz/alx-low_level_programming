#include <stdio.h>

/**
 * swap_int - swaps the value of two intergers
 * @a: first interger to be swapped
 * @b: second interger to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
