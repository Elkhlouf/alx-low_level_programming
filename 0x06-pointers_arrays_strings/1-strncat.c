#include "main.h"
#include <string.h>
/**
 * _strcat- Concatenates two strings
 *@dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
