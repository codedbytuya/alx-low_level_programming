#include "main.h"

/**
 * print_alphabet  - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
    	char times;
    for (times = 0 ;times <=9; times++){
	    for (letter = 'a'; letter <= 'z'; letter++){
		    _putchar(letter);
	    }
	    _putchar('\n');
    }
}
