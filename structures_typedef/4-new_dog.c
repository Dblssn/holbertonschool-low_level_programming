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
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(strlen(name) + 1);
	dog->owner = malloc(strlen(owner) + 1);

	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}
