#include "main.h"

/**
 * clear_bit - clear bit.
 * @n: pointer to an integer.
 * @index: index of the bit you want to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
