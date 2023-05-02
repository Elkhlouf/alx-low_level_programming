#include "main.h"

/**
 *_atoi - Convert a string to an integer
 * @s: The input string
 * Return: The integer value of the input string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + sign * digit;
		}
		else if (result != 0)
		{
			break;
		}
		s++;
	}
	return (result);
}
