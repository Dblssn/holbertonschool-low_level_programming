#include "main.h"

/**
  * _strncat - copies a string from src to dest
  *@dest: destination buffer
  *@src: source string
  *@n: integer
  * Return: pointing to the resulting dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
		dest[a] = '\0';
	}
	return (dest);
}
