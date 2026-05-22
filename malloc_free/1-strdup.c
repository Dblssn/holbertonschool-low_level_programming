#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a new string which is a duplicate of the str
  *@str: check the string
  *Return: a pointer to a new string on success, returns pointer to dup or NULL
  */
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int len = 0;

	if (str == 0)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc(sizeof(char) * len + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)

		duplicate[i] = str[i];

	return (duplicate);
	free(duplicate);
}
