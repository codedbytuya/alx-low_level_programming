#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	/* base case: if the string is empty, return */
	if (*s == '\0')
	{
		return;
	}
	/* recursive case: call the function on the rest of the string and then print the first character */
	 _print_rev_recursion(s + 1);
	_putchar(*s);
}
