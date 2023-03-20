#include <stdio.h>

/**
 * main - program that prints all possible combinations
 * of single digit number
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar (x + '0');
	if (x == 9)
	{
		break;
	}
	putchar (',');
	putchar (' ');
	}
	putchar ('\n');
	return (0);
}
