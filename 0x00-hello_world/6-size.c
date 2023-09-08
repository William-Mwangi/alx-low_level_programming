#include<stdio.h>
/**
 * main - get sizes of data types
 * Return: returns zero
 */
int main(void)
{
int intType;
float floatType;
char charType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}

