#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets.
 * main - check the code.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
