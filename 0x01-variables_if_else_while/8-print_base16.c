#include <stdio.h>

/**
 * main - function prints all the hexadecimal single numbers 0 - 15
 * Return: 0
 */

int main(void)
{
int i;
for (i = 0; i <= 15; i++)
{
	char hexChar;

	if (i >= 0 && i <= 9)
	{
		hexChar = '0' + i;
	}
	else
	{
		hexChar = 'a' + (i - 10);
	}
	putchar(hexChar);
}
putchar('\n');/*Newline at the end*/
return (0);
}
