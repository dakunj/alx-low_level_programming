#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
