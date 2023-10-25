#include "main.h"
/**
 * _strlen_recursion - function that prints length of string
 * @s: entery point
 * Return: void
*/

int _strlen_recursion(char *s)
{
	int n;

n = 0;
	if (s[n] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
