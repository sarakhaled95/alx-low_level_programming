#include "dog.h"
#include <stdio.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * struct dog - variables
 * @d: pointer
 * @name: name of dog
 * @age: dog age
 * @owner: owner's name
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
