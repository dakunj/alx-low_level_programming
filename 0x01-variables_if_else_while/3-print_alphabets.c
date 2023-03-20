#include <stdio.h>
#include <ctype.h>
/**
 * main - function to print alphabet in both lower and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int c;

	for(x = 'A'; x <= 'Z'; x++)
	{
		c = tolower(x);
		putchar (c);
	}
	for(x = 'A'; x <= 'Z'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
