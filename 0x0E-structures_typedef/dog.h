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
typedef struct dog dog_t;

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
