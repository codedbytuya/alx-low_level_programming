#include "main.h"
/** 
 * swap_int - Swaps the values pointed to by 2 pointers
 * @a: First int pointer 
 * @b: Secont int pointer
 * Return 0
 * Written by Tuyambeka V
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
