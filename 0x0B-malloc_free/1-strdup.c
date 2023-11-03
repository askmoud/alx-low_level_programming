#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function to convert string
 * @str: the string to
 * Return: pointer to new space
*/

char *_strdup(char *str)
{
	int i = 0, size;
	char *new;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)

	new = malloc(size * sizeof(*str) + 1);
	if (new == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			new[i] = str[i];
	}
	return (new);
}
