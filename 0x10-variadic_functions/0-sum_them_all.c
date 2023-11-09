#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sum all numbers in array
 * @n: entery point
 * Return: 0 if n null and s
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int s = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i--)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
