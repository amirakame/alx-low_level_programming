#include "main.h"

/**
 * flip_bits - flips bits.
 * to get from one number to another.
 * @n: one's number.
 * @m: two's number.
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip;

	flip = n ^ m;

	while (flip > 0)
	{
		if ((flip & 1) == 1)
			count++;

		flip >>= 1;
	}

	return (count);
}
