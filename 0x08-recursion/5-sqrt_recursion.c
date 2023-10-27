#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 *
 * @n: the number to calculate the natural square root number
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

int _sqrt(int n, int i)
{
	int _sqrt = i * i;

	if (_sqrt > n)
		return (-1);

	if (_sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
