#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog's information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct contains name, age, and owner of the dog
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

#endif /* _DOG_H_ */

