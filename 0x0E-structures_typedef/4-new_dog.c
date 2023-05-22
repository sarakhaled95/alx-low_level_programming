#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets the length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
		return (length);
}
/**
 * _strcpy - a function that copyies a string from @src to @dest
 * @src: string to copy
 * @dest: copy string into here
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog's age
 * @owner: owners name
 * Return: structure pointer dog or null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);




}
