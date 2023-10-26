#include "main.h"
/**
 * _sqrt_recursion - function that returns square of a number
 * @n: entery point
 * Return: no value
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function
 * @n: entery point
 * @x: entery point
 * Return: no value
*/

int _sqrt(int n, int x)
{
	if ((x * x) > n)
		return (-1);
	else if ((x * x) == n)
		return (x);
	else
		return (_sqrt(n, x + 1));
	return (0);
}
