#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: number of times the character '_' should be printed
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
