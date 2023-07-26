#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - tell the name and the age
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/**
 * struct dog_t - tell the name and the age
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
