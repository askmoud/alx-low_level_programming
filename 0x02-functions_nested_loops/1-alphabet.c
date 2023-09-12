#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Description: 'prints alphabet in lowercase'
 * Return: value is 0
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
