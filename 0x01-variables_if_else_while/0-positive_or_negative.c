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
	(n > 0) ? printf("%d is positive ", n) : printf("%d is negative ", n);
	if (n == 0) 
	{
		printf ("%d is zero ", n);
	}
	/* your code goes there */
	return (0);
}
