#include "main.h"
/**
 * _sqrt_recursion - function that returns square of a number
 * @n: entery point
 * Return: no value
*/

int _sqrt_recursion(int n)
{
	int x;
x += 1;
	if (n % x != 0)

		return (-1);

	else

		return (n / _sqrt_recursion(x + 1));
}
