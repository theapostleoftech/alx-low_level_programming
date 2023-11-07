#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure with
 * @name: first dog member
 * @age: second dog memeber
 * @owner: third dog member
 */
struct dog
{
	char *name;
	char *owner;
	float age;

};

/**
 * dog_t - typedef fo struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
