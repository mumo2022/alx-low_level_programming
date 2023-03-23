#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings
 * @n:  is the number of strings passed to the function
 * @...: A variable number of strings to be printed.
 * Return: Always 0 (success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int m;
	char *str;

	va_start(string, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (m != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
