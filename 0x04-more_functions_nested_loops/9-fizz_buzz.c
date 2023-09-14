#include <stdio.h>
#include <string.h>

/**
 * fizz_buzz - prints nums 1 - 100
 * Return: nothing
 */

void fizz_buzz(void)
{
	int i;
	char f[20];
	char b[20];
	char fb[20];

	strcpy(f, "Fizz");
	strcpy(b, "Buzz");
	strcpy(fb, "FizzBuzz");

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s ", f);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", fb);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
