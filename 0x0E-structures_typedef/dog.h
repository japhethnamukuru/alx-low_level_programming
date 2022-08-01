#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores attribute of dog
 *
 * @name: Attribute 1
 *
 * @age: Attribute 2
 *
 * @owner: Atrribute 3
 *
 * Description: stores attributes or properties of the dog structure
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_data;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
