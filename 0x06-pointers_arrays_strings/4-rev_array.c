#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, y, z;

	y = 0;
	z = n - 1;
	while (y < z)
	{
		swap = *(a + y);
		*(a + y) = *(a + z);
		*(a + z) = swap;
		y++;
		z--;
	}
}
