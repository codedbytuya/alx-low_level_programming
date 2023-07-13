#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and returns a pointer to the allocated memory.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int total_size;

    // Check if nmemb or size is 0
    if (nmemb == 0 || size == 0)
        return NULL;

    // Allocate memory for the array
    ptr = malloc(nmemb * size);

    // Check if malloc failed
    if (ptr == NULL)
        return NULL;

    // Initialize the allocated memory with zeros
    for (unsigned int i = 0; i < (nmemb * size); i++)
        ptr[i] = 0;

    return ptr;
}

