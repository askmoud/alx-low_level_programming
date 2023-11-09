#include <stdio.h>
#include "dog.h"
/**
 * strcpy - function that copy strings
 * @dest: copy string to
 * @src: string to copy
 * Return: no value
*/

char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
