#include "main.h"

/**
 * get_bit - get bit.
 * @n: decimal number.
 * @index: index of binary representation.
 *
 * Return: Value of bit at index.
 *         If an error occurs or index is out of range, return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8) /* Check for out of range. */
		return (-1);

	return ((n >> index) & 1); /* Shift by index and mask with 1 to get value. */
}
