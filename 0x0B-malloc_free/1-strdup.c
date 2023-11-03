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
	int i = 1, size = 0;
	char *new;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	new = malloc((sizeof(char) * i) + 1);

	if (new == NULL)
		return (NULL);
	while (size < i)
	{
		new[size] = str[size];
		size++;
	}
	new[size] = '\0';
	return (new);
}
