#include "main.h"

/**
 * puts2 - a fucntion that prints every other
 * character of a string starting with the 1st
 * character followed by a new line
 * @str: pointer to a string
 * Return: void
 */
void puts2(char *str)
{
	int i, l;

	for (l = 0; str[l]; l++)
	{
	;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
