#include "main.h"
/**
 * factorial - function that returns factorial of a given num
 * @n: entery point
 * Return: n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
