#include "main.h"
/**
* print_rev - function
* @s: entery point
* Return: no return value
*/

void print_rev(char *s)
{
	int a = 0;

	int o;

while (*s != '\0')
{
	a++;
	s++;
}
s--;
for (o = a; o > 0; o--)
{
	_putchar(*s);
	s--;
}
_putchar('\n');
}
