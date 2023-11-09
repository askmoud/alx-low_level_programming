#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: separator
 * @n: entery point
 * Return: numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list nums;

	if (!n && !separator)
	{
		printf("\n");
		return;
	}
	va_start(nums, n);
	while (i--)
	{
		printf("%d%s", va_arg(nums, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(nums);
}
