#include "shell.h"

/**
 * bfree -Deallocates memory for a pointer and sets it to NULL.
 * @ptr: Address of the pointer to be freed and set to NULL.
 *
 * This function deallocates the memory associated with a pointer and
 * then sets the pointer itself to NULL. It is a convenient way to ensure
 * that a pointer no longer points to valid memory after deallocation.
 *
 * @ptr: Address of the pointer to be freed and set to NULL.
 *
 * Return: 1 if memory was successfully freed, 0 if the ptr was already NULL.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
