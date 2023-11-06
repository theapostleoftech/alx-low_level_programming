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

int main(void)
{
	struct dog dog;
	return (0);
}

#endif
