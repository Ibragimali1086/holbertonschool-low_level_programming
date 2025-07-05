#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 * @name: pointer to the dog's name (string)
 * @age: dog's age (float)
 * @owner: pointer to the dog's owner name (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototype for print_dog function */
void print_dog(struct dog *d);

#endif /* DOG_H */
