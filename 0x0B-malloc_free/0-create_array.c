#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - array of chars function.
 * @size: size of int
 * @c: char  parameter to initialize the array.
 *
 * Return: Returns NULL if size is 0 and.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
