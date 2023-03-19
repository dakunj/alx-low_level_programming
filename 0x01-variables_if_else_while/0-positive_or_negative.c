#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more heae */

/* main function. Print if a random number generated is either positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive ", n);
	} else if (n < 0) 
	{
		printf("%d is negative ", n);
	} else 
	{
		printf("%d is zero ", n);
	}
	/* your code goes there */
	return (0);
}
