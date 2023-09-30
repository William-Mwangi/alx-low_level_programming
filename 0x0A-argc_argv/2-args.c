#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
	return (0);
}
