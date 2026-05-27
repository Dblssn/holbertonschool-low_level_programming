#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
  *new_dog - function that creates a new dog
  *@name: name
  *@owner: owner
  *@age: age
  *Return: NULL if function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);
	dog->age = age;

	return (dog);
}
