#include <stdio.h>
/**
 * main - print alphabet in order
 * Return: 0
 */
int main(void)
{
char i;
for (i = 97; i < 123; i++)
{
	if (i != 113 && i != 101)
		putchar(i);
}
putchar('\n');
return (0);
}
