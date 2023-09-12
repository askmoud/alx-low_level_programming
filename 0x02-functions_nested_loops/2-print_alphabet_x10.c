#include "main.h"
/**
 * print_alphabet_x10 - 'Prints alphabets ten times'
 * Description: 'Prints alphabets ten times'
 * Return: value is 0
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j <= i)
		j++;
		{
			_putchar(j);
		}
			_putchar('\n');
	}
}
