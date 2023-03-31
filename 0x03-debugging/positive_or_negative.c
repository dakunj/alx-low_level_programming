#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - to determine if a number is positive, negative or zero
 *
 *  Return: 0
 */

int main(void)

{
	int n = 0;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	/* your code goes there */
	return (0);
}
