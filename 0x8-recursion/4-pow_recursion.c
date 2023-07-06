#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *     
 * Return: the value of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* base case: if y is negative, return -1 */
	if (y < 0)
	{
		return (-1);
	}
	/* base case: if y is 0, return 1 as any number raised to 0 is 1 */
	if (y == 0)
	{
		return (1);
	}	
	/* recursive case: return x times x raised to the power of y - 1 */
	return (x * _pow_recursion(x, y - 1));
}
