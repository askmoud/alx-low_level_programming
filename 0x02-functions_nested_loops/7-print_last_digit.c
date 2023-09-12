#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x: Changing value
 * Description: Function that prints the last digit of a number
 * Return: value is 0
*/
int print_last_digit(int x)
{
	int l;

	l = x % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar (l + 48);
		return (l);
	}
}
