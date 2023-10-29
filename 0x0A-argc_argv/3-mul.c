#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0
*/

int main(int argc, char **argv __attribute__((unused)))
{
	int sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
