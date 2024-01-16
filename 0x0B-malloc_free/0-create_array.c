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
	char *c;

	if (size == 0)
		return (NULL);

	c = (char *) malloc(sizeof(char) * size);

	if (c == NULL)
		return (0);

	return (p);
}
