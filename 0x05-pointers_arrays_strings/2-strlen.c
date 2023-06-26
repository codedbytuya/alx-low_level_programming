#include "main.h"

/**
 *_strlen - return length of a string
 *@len: Counter for string length
 *@s: char being checked
 *Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
