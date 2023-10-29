#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @bytes: bytes
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	char *main_ptr = (char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02hhx", main_ptr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
