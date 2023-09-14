#include "main.h"
/**
 * _isupper - function
 * @c: entery point
 * Description: tells if char c is uppercase
 * Return: value is 0 or 1
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
