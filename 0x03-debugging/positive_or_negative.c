#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative -Determines if integer is positive, negative, or zero.
 *
 * @n: The integer to be checked.
 *
 * Return: None.
 */
void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
