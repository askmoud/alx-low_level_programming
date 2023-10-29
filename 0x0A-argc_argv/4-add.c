#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;


	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
	{
		if (*c < '0' || *c > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
	}
	}
	printf("%d\n", sum);
	return (0);
}
