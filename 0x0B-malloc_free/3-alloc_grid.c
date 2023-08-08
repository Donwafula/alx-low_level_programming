#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of int
 * @width: columns of the array
 * @height: rows of the array
 *
 * Return: Returns a pointer to the 2D array or NULL or 0
 */

int **alloc_grid(int width, int height) /* 6 columns and 4 rows*/
{
	int j, i;
	int **a;

	if (width < 1 || height < 1)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}

	return (a);
}
