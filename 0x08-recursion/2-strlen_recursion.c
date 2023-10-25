#include "main.h"
/**
 * _strlen_recursion - function that prints length of string
 * @s: entery point
 * Return: void
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\n');
		return;
	}
	strlen(*s);
	_strlen_recursion(s);
}
