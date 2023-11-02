#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - converts the parameter passed to the program to string
 *
 * @ac: the argument count
 *
 * @av: the argument vector
 *
 * Return: Always 0.
 *
 */

char *argstostr(int ac, char **av)

{
	int ch = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			ch++;
			c++;
		}

		c = 0;
		b++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	b = 0;

	while (av[b])
	{
		while (av[b][c])
		{
			s[d] = av[b][c];
			d++;
			c++;
		}

		s[d] = '\n';

		c = 0;
		d++;
		b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
