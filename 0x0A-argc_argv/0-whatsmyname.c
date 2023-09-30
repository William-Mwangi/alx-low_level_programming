#include <stdio.h>
#include <stdlib.h>

/**main - check code
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s", argv[0]);
	}
	printf("\n");
	exit(EXIT_SUCCESS);
	return (0);
}
