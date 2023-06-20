#include "main.h"
#include <stdio.h>

/**
 * _isalpha:  
 * Returns 1 if c is a letter, lowercase or uppercase
 *Returns 0 otherwise
 */
 
int _isalpha(int c)
{
    if (isalpha(c))
        return 1;
    else
        return 0;
}
