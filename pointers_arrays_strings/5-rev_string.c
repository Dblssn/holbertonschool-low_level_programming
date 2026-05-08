#include "main.h"
#include <string.h>
/**
  * rev_string - reverse string
  *@s: check the string
  */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		i++;

		len--;
	}
}
