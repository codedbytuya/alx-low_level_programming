#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 * 
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	/* base case: if the string is empty, return 0 */
	if (*s == '\0')
	{
	return (0);
	}
	/* recursive case: return 1 plus the length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
