#include "main.h"
/**
* puts2 - function
* @str: entery point
* Return: no value
*/

void puts2(char *str)
{
	char *d = str;

	int n = 0;

	int l = 0;

	int o;

while (*d != '\0')
{
d++;
l++;
}
n = l - 1;
for (o = 0; o <= n; o++)
{
if (o % 2 == 0)
{
	_putchar(str[o]);
}
}
}
