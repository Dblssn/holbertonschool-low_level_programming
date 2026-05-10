#include "main.h"

/**
  * puts_half - prints the second half of a string
  * @str: string to print
  */
void puts_half(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 1)
	{
		len++;
	}

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
