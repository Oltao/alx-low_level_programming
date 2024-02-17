#include "main.h"
#include <stdio.h>
/**
 * get_bit - fumc to get value of a bit at a given index.
 * @n: num to evaluate
 * @index: index starting from 0
 * Return: Value of bit at index, or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
