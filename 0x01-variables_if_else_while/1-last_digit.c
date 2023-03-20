#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - function to print the last digit of a stored number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if(digit > 5)
	{
		printf("Last digit of %d is %d, and is greater than 5", n, digit);
	} else if(digit == 0)
	{
		printf("Last digit of %d is %d, and is zero", n, digit);
	} else
	{
		printf("Last digit of %d is %d, and is less than 6 and not zero", n, digit);
	}
	return (0);
}
