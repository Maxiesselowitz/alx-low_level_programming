#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n, int i)

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 *
 * @n: the number to return the natural square root number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns a natural square root number
 *
 * @n: number to return the square root number
 *
 * @i: repeat number
 *
 * Return: the natural square root
 */

int _sqrt(int n. int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (sqrt(n, i + 1));
}
