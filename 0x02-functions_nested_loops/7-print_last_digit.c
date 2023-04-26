#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The number to print the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	long ln = n;
	int last_dig;

	if (ln < 0)
	{
		ln = -ln;
	}
	last_dig = (int)(n % 10);

	_putchar(last_dig + '0');

	return (last_dig);
}

