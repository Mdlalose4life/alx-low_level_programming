#ifndef MAIN_H
#define MAIN_H
/**
* struct dog - Name of the new structure.
* @name: Name of a dog
* @age: Age of a dog
* @owner: owner of a dog
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
