#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog description structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner name
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
