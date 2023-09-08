#include <stdio.h>
/**
 * main - print alphabet in order without using char or printf
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
