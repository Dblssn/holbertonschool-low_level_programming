#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - creates array of chars, initializes it with a specific char
  *@c: character
  *@size: check size
  *Return: pointer to array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
