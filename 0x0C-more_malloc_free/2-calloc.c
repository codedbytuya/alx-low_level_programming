#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total_size;

    /* Handle cases where nmemb or size is 0 */
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Calculate the total size of the memory to be allocated */
    total_size = nmemb * size;

    /* Allocate memory using malloc */
    ptr = malloc(total_size);

    /* Check if malloc failed */
    if (ptr == NULL)
        return NULL;

    /* Set the allocated memory to zero */
    memset(ptr, 0, total_size);

    return ptr;
}
