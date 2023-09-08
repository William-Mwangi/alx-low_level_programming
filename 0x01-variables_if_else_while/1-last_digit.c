#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function to print a statement
 * Description: a function to get last digit of a number
 * Return: a zero
 */
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if(n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
if(n == 5)
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
if(n < 6 && n != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
return (0);
}
