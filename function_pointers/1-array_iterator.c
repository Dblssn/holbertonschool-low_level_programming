#include "function_pointers.h"

/**
  *array_iterator - executes a function given as a parameter of an array
  *@size: size
  *@action: action
  *@array: array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(action(array[i]));
	}
}
