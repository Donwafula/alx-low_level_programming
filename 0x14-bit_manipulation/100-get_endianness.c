#include "main.h"

/**
 * get_endianness - defines if a pc is big or little endianness.
 * Return: 0 big 1 little
 */

int get_endianness(void)
{
	int a = 1;

	if ((a >> 31) == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
