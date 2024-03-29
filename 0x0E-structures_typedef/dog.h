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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
