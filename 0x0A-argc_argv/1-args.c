#include <stdio.h>
/**
 * main - function
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
