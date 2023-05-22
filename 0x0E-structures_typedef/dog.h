#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - declare name, age and owner
 * @name: name of the dog
 * @age: dog age
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*_DOG_H*/
