#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If new_size is zero, free the memory block and return NULL */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    /* If ptr is NULL, equivalent to malloc(new_size) */
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        return new_ptr;
    }

    /* If new_size is equal to old_size, do nothing and return ptr */
    if (new_size == old_size)
        return ptr;

    /* Allocate memory for the new size */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL;

    /* Copy the contents from the old memory block to the new block */
    if (new_size < old_size)
        memcpy(new_ptr, ptr, new_size);
    else
        memcpy(new_ptr, ptr, old_size);

    /* Free the old memory block */
    free(ptr);

    return new_ptr;
}
