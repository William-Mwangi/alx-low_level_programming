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
	putchar(i);
}

for (i = 65; i < 91; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
