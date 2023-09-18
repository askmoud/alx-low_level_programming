#include "main.h"

/**
* swap_int - function
* @a: entery point
* @b: enetery point
* Return: return value is 0
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
