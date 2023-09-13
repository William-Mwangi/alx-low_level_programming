extern int _putchar(char c);
/**
 * print_alphabet - prints lower case letters
 * Return: nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
