#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * struct dog - different type variables
 * @d: pointer
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
