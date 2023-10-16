#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

/**
 * rand - Rand
 * Return: void
*/
int rand(void)
{
	return (9); /* Replace the random number generator with the number 9*/
}

/**
 * init - init
 * Return: void
*/
void init(void) __attribute__((constructor));

/**
 * init - init
 * Return: void
*/
void init(void)
{
	char *cmd = "touch /tmp/hacked_by_mss";

	system(cmd);
}
