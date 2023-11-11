#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name pointer to a function
 *
 * @name: the string to add
 *
 * @f: the pointer to function
 *
 * Return: null
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
