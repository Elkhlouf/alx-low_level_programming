#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int l, n;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 != 0)
	{
		n = (l + 1) / 2;
	}
	else
	{
		n = (l / 2);
	}
	while (n < l)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
