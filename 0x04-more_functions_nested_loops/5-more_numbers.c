#include "main.h"
/**
* more_numbers - function
* Description: Write numbers from 0 to 14 10 times
* Return: no return value
*/

void more_numbers(void)
{
	int a;

	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
