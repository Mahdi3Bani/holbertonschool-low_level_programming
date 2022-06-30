#ifndef DOG_H_
#define DOG_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - new structure type
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
