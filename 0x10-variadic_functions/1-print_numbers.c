#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int m;

	va_start(num, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (m != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
