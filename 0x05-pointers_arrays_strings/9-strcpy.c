#include "main.h"
/**
* _strcpy - function
* @dest: entery point
* @src: entery point
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	int y = 0;

while (*(src + 1) != '\0')
{
	i++;
}
for ( ; y < 1 ; y++)
{
	dest[y] = src[y];
}
dest[i] = '\0';
return (dest);
}
