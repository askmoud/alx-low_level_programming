#include "main.h"
/**
* print_most_numbers - function
* Description: Function that prints number except 2 and 4
* Return: no value
*/

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
