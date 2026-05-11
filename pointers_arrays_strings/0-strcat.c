#include "main.h"
/**
  * _strcat - copies a string from src to dest
  *@dest: destination buffer
  *@src: source string
  * Return: pointing to the resulting dest
  */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
		dest[a] = '\0';
	}

	return (dest);
}
