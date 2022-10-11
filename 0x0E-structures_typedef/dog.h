#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - information about dogs
 *@name -  name of dog
 *@age - age of the dog
 *@owner - owner of the dog
 *
 */
tyedef struct dog
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









