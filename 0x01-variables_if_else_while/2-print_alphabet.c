#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int x = 'A';
	int c;

	while (x <= 'Z')
	{
		c = tolower(x);
		putchar (c);
		x++;
	}
	putchar("\n");
	return (0);
}
