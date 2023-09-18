#include "main.h"
/**
* _puts - function
* @str: entery point
* Return: no return value
*/

void _puts(char *str)

{
while (*str != '\0')
{
	_putchar(*str++);
}
	_putchar('\n');
}
