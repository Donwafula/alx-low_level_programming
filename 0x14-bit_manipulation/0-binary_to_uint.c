#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: string of entry
 * Return: digital number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int mul = 1, ind = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if (b[ind] != '0' && b[ind] != '1')
		{
			return (0);
		}
	}
	for (ind = ind - 1; ind >= 0; ind--)
	{
		char c_Char;

		c_Char = b[ind];
		if (c_Char == '1')
		{
			dec += mul;
		}
		mul = mul * 2;
		if (ind == 0)
		{
			break;
		}
	}
	return (dec);
}
