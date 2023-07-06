#include "main.h"

/**
* _sqrt - helper function to find the square root of a number
* _sqrt_Recursion - function to find sqrt by recursion
* @n: the number to find the square root of
* @i: the possible square root
*
* Return: the square root of n, or -1 if n has no natural square root
*/
int _sqrt(int n, int i)
{
	/* base case: if i is greater than n, n has no natural square root */
	if (i > n)
	{
		return (-1);
	}
	/* base case: if i times i is equal to n, i is the square root of n */
	if (i * i == n)
	{
		return (i);
	}
	/* recursive case: increment i and try again */	
	return (_sqrt(n, i + 1));
}

/**
 *  * _sqrt_recursion - returns the natural square root of a number
 *   * @n: the number to find the square root of
 *    *
 *     * Return: the square root of n, or -1 if n has no natural square root
 *      */
int _sqrt_recursion(int n)
{
	    /* call the helper function with 1 as the initial possible square root */
	    return (_sqrt(n, 1));
}
