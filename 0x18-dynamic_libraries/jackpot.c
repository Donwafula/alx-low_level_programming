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
	static int index, numbers[] = {9, 8, 10, 24, 75, 9};

	if (index < 6)
		return (numbers[index++]);

	else
		return (1 + rand() % 15);
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
