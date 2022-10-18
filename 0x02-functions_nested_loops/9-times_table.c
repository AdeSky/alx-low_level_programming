#include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 * starting with 0
 * Return: 0
 */
void times_table(void)
{
	int f, g, d;

	for (f = 1; f <= 9; f++)
	{
		_putchat('0');
		_putchar(',');
		_putchar(' ');
		for (g = 1; g <= 9; g++)
		{
			d = (f * g);
			if ((d / 10) > 0)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
		_putchar((d % 10) + '0');

		if (g < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
