#include <stdio.h>
/**
* main - program that print its name.
* Return: 0.
* @argc: Arguement count in number.
* @argv: Arguement Value.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
