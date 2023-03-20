#include <stdio.h>
#include <ctype.h>

/**
 * main - function to print alphabet in lowercase missing q and e
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int c;
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == 'E' || x == 'Q')
		{
			continue;
		}
		c = tolower(x);
		putchar(c);
	}
	putchar('\n');
	return (0);
}

