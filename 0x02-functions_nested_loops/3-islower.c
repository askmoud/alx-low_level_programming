#include "main.h"
/**
 * _islower - Checks for lowercase chars
 * @c: Character that will be checked
 * Description: Checks for lowercase chars
 * Return: value is 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
