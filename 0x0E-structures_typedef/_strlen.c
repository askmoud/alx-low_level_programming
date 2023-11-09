#include <stdio.h>
#include "dog.h"
/**
 * _strlen - function that counts length of string
 * @str: string for length
 * Return: length
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
