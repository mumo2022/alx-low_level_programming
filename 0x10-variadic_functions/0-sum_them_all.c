#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int m, sum = 0;

	va_start(num, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(num, unsigned int);
	}
	va_end(num);

	return (sum);
}
