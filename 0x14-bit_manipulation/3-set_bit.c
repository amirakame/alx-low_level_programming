#include "main.h"

/**
 * set_bit - sets bit.
 *
 * @n: pointer to an unsigned long integer
 * @index: index starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= 1L << index;

	return (1);
}
