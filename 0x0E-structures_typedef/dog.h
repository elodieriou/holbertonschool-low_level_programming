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
typedef struct dog dog;
struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
