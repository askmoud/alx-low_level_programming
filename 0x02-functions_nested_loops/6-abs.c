#include "main.h"
/**
 * _abs - Absolute value of an in integer
 * @x: Changed value
 * Description: Function that computes the absolute value of an integer
 * Return: value is 0
*/

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	_putchar('\n');
}
