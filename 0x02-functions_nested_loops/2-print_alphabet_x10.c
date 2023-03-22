#include "main.h"

/**
 * print_alphabet_x10 - function to print the alphabets ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x, i;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
		for (i = 1; i <= 10; i++)
		{
			_putchar('\n');
		}
	}
}
