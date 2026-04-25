/**
 * _puts - prints a string followed by a new line
 * @str: points to the string
 *
 * Return: printed string followed by a new line
 */
void _puts(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
