#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to search
 * @accept: accepted characters
 *
 * Return: number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
		{
			return (count);
		}

		i++;
	}

	return (count);
}
