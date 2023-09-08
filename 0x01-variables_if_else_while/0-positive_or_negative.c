#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - function
 *description - This code generates numbers and tell if its positive, negative
 *Return: return value is 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%i is positive\n", n);

else if (n == 0)
	printf("%i is zero\n", n);

else if (n < 0)
	printf("%i is negative\n", n);

return (0);
}
