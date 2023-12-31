/**
 * leet - encoding in leet
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		else if (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		else if (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		else if (*p == 't' || *p == 'T')
		{
			*p = '7';
		}
		else if (*p == 'l' || *p == 'L')
		{
			*p = '1';
		}
		p++;
	}
	return (s);
}
