#include <stdio.h>

/**
 * main - funtion to print all single digit numbers of base 10
 * starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int x, n;

	for (x = 0; x < 10; x++)
	{
		n = x + 48;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
