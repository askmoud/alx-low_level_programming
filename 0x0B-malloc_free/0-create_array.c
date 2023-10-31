#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: character
 * Return: no value
*/
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
	{
		return (NULL);
	}
	while (size--)
		s[size] = c;
	return (s);
}
