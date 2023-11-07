#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: entery point
 * @s2: entery point
 * Return: no value
*/

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	int *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	d = a + b;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);
	b = 0;
	while (c < d)
	{
		if (c <= a)
		{
			s[c] = s1[c];
			c++;
		}
		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}
	}

	s[c] = '\0';
	return (s);
}
