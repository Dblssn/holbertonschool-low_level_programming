#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  *init_dog - initialize a variable
  *@name: name
  *@age: age
  *@owner: owner
  *@d: pointer dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
