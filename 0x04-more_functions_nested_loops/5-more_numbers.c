#include "main.h"

/**
 * more_numbers -> prints 10 times the numbers.
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; y < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}

