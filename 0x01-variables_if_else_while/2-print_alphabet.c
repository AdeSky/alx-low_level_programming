#include <stdio.h>

/**
 * main-Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
