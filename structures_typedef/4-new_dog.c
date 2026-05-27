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
	int i, len;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (len = 0; name[len]; len++)

		dog->name = malloc(len + 1);

	for (i = 0; i < len; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (len = 0; owner[len]; len++)

		dog->owner = malloc(len + 1);

	for (i = 0; i < len; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}
