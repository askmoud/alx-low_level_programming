#include "main.h"
/**
 * _isalpha - Checks for alphabetic chars
 * @c: Checked char
 * Description: Checks for alphabetic characters
 * Return: value is 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
