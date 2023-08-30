#include "lists.h"
/**
 * printBefore - free memory of all list.
 * void: pointer to head in fucntion
 * Return: Always success.
 */
void printBefore(void) __attribute__ ((constructor));

/**
 * startupfun - This functions print a text
 *
 */

void printBefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
