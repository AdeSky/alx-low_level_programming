#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -a fuction that prints all natural numbers
 * from n to 98, followed by a new line
 * @n: number input
 * Return: natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ")
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
		}
		n--;
	}
	}
		else
		{
			printf("98");
		}
		printf("\n");
	}
}
