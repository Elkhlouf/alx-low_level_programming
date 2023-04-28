#include "main.h"

/**
 * print_number - prints an onteger using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
