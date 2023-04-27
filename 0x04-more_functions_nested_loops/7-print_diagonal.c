#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: the number of \ characters to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; i++)
			{
				if (j == i)
					_putchar(' ');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
