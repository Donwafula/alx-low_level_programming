#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a func given as a parameter on
 *                  each element of an arr
 * @size: large of the array
 * @array: input array
 * @action: input function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
