#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - structer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
char *strcpy(char *dest, char *src);
#endif
