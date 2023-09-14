#include "main.h"
/**
* print_square - function
* @size: entery point
* Description: function that prints a square
* Return: no value
*/

void print_square(int size)
{
	int b;

	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b < size; b++)
		{
			for (c = 1; c < size; c++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
