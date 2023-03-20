#include <stdio.h>

/**
 * main - function to print the alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 122; x > 96; x--)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
