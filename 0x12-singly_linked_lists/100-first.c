#include <stdio.h>

void one(void) __attribute__ ((constructor));

/**
 * one- print's sentence before the main.
 * function's executed.
 */
void one(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
