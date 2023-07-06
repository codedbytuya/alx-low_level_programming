#include "main.h"

/**
 * _puts_recursion - prints a string recursively, followed by a new line
 * @s: the string to print
 *   
 * Return: nothing
 */
void _puts_recursion(char *s)
{
       	if (*s == '\0') /* base case */
	 {
		_putchar('\n');
		return;
						    }
	        _putchar(*s); /* recursive case */
		_puts_recursion(s + 1);
}

