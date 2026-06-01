#include "function_pointers.h"

/**
 *int_index - searches for an integer.
 *@size: check the size
 *@cmp:pointer to the function to be used to compare values
 *@array: check the array
 *Return: the index of the first element and size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
	{
		return (-1);
	}

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
		if ((cmp(array[i])) != 0)
		{
			return (i);
		}
	return (-1);
}
