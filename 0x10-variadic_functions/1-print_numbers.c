#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: the string to be printed between numbers
 *
 * @n: the number of intergers passed to the function
 *
 * @...: a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(num);
}
