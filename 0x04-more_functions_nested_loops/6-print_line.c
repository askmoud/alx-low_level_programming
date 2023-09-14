#include "main.h"
/**
* print_line - function
* @n: entery point
* Description: Function that draws straight line in terminal
* Return: no return value
*/

void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
