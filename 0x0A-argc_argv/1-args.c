#include <stdio.h>
#include "main.h"

/**
 * main - To print number of arguements passed.
 * Return: 0.
 * @argc: return counts parameter.
 * @argv: Arguement vector but not used.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
