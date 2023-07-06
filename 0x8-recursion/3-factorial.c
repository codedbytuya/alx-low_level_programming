#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* base case: if n is negative, return -1 to indicate an error */
	if (n < 0)
	{
		return (-1);
	}
	/* base case: if n is 0, return 1 as the factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}				        
	/* recursive case: return n times the factorial of n - 1 */
	return (n * factorial(n - 1));
}

