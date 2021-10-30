#ifndef DEF_DOG
#define DEF_DOG

/**
 * struct dog - main informations about a dog
 *
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Description: the struct dog give the main informations about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void);

#endif