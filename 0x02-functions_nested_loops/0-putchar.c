/**
 * main - print _putchar
 * @c: The character to print
 * Return: 0
 */

extern int _putchar(char c);
int main(void)
{
	char lett[] = "_putchar\n";
	int i;

	for (i = 0; lett[i] != '\0'; i++)
	{
		_putchar(lett[i]);
	}
	return (0);
}
