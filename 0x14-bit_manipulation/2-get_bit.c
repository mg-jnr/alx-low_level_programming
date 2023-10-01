#include "main.h"
/**
 * get_bit - returns the value of a Bit at an index in a decimal number given.
 * @n: number to be search.
 * @index: index of the Bit.
 *
 * Return: value of the Bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
