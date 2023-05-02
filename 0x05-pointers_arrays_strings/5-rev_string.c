#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char tm;

	while (s[l] != '\0')
	{
		l++;
	}
	while (i < l / 2)
	{
		tm = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tm;
		i++;
	}
}
