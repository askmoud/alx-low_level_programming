#include <stdio.h>
/**
 * main - function
 * Return: return value is 0
 *
*/
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
return (0);
}
