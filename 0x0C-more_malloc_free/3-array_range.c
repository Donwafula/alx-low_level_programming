#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: min range to allocate in the memory
 * @max: max range to allocate in the memory
 * Return: The pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int i, j;
	int *r;

	if (min > max)
		return (NULL);
	j = min;
	r = (int *) malloc(sizeof(int) * (max - min + 1));
	if (r == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		r[i] = j;
		j++;
	}
	return (r);
}
