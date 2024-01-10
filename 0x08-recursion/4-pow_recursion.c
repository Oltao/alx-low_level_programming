#include "main.h"

/**
 * _pow_recursion - power of x and y
 * @x: Number Integer
 * @y: Power
 * Return: -1 to show error
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
