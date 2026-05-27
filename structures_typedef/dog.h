#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
  *struct dog - new type
  *@age: age
  *@name: name
  *@owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
