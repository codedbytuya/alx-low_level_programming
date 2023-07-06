#include "main.h"

/**
 * _is_prime - helper function to check if a number is prime
 * @n: the number to check
 * @i: the possible divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime(int n, int i)
{
	/* base case: if i is equal to n, n is prime */
	if (i == n)
	{
		return (1);
					    }
	        /* base case: if i divides n evenly, n is not prime */
	        if (n % i == 0)
		{
			return (0);
		}
		    /* recursive case: increment i and try again */
		return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	    /* edge case: if n is less than 2, it is not prime */
	    if (n < 2)
	    {
		        return (0);
	    } 
            /* call the helper function with 2 as the initial possible divisor */
	    return (_is_prime(n, 2));
}
