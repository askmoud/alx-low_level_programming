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
	char *str;
	va_list nums;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(nums, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(nums, char *)) ? str : "(nil)",
		 i ? (separator ? separator : "") : "\n");
	}
	va_end(nums);
}
