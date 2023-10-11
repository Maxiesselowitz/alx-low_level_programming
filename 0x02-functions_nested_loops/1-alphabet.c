#include "main.h"
/**
 * main - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}

