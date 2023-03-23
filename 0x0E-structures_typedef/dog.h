#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type of structure that defines dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the dog's owner
 * Description: This is dog's struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
