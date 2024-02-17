#include "main.h"
#include <stdio.h>

/**
 * flip_bits - func to flip bits to convert num to another num
 * @n: first num
 * @m: second num to convert to
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
