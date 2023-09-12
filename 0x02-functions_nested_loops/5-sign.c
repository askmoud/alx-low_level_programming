#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Checked number
 * Description: Prints sign of a number
 * Return: value is 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar(n);
		return (-1);
	}
	_putchar('\n');
}
