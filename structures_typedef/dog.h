#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* New type dog_t as alias for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
