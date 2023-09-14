#include "main.h"
/**
 * _isdigit - function
 * @c: entery point
 * Description: function that checks for digit 0 through 9
 * Return: value is 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
