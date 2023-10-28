#include "main.h"

/**
 * _puts - a program that prints a string to stdout
 *
 * @str: the stirng to be printed
 *
 * _putchar - prints a new line
 */

void _puts(char *str)

{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
