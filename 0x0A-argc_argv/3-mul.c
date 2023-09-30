#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int pro;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	pro = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", pro);
	return (0);
}
