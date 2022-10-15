#include <stdio.h>

/**
 * main -Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int n;

	 for (a = 0; a < 10; a++)
		putchar(a);
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
