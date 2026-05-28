#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new dog
 *@name: name
 *@owner: owner
 *@age: age
 *Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len_name = 0, len_owner = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	while (owner[len_owner])
		len_owner++;

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}
