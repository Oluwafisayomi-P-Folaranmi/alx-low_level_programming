#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
