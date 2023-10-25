#include "main.h"
/**
 * _print_rev_recursion - function that prints function in reverse
 * @s: entery point
 * Return: no value
*/

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
