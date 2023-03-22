#include "main.h"

/**
 * print_alphabet_x10 - function to print the alphabets ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x, i;

	for (x = 1; x <= 10; x++)
	{
		_putchar('\n');
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
}
