#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings of any size
 *
 * @s1: the first string to concatenate
 *
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)

{
	int i = 0, r = 0, w = 0, z = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[r])
		r++;

	z = i + r;
	s = malloc((sizeof(char) * z) + 1);

	if (s == NULL)
		return (NULL);

	r = 0;

	while (w < z)
	{
		if (w <= i)
			s[w] = s1[w];

		if (w >= i)
		{
			s[w] = s2[r];
			r++;
		}

		w++;
	}
	s[w] = '\0';

	return (s);

}
