#include "main.h"

/**
* print_triangle - function
* @size: entery point
* Return: no value
*/

void print_triangle(int size)
{
	int a, b, c;

	if (size == 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = size - 1; b > a; b--)
		{
		_putchar(' ');
		}
		for (c = 0; c <= b; c++)
		{
		_putchar(35);
		}
	_putchar('\n');
	}
}
