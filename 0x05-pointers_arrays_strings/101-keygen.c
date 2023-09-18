#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generatePassword - Function to generate a random password
 * @password: pointer
 * @length: length
 * Return: nothing
 */

void generatePassword(char *password, int length)
{
	char chst[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charsetSize = sizeof(chst) - 1;

	for (int i = 0; i < length; i++)
	{
		int randomIndex = rand() % charsetSize;

		password[i] = chst[randomIndex];
	}
	password[length] = '\0';
}

/**
 * main - check code
 * @argc: counter
 * @argv: commandline argment
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <password_length>\n", argv[0]);
		return (1);
	}
	int passwordLength = atoi(argv[1]);

	if (passwordLength <= 0)
	{
		fprintf(stderr, "Invalid password length\n");
		return (1);
	}
	srand(time(NULL));

	char password[passwordLength + 1];

	generatePassword(password, passwordLength);
	printf("Generated Password: %s\n", password);
	return (0);
}
