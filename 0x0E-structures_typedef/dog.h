#ifndef _HEADER_
#define _HEADER_
/**
  * struct dog -Attribute of the Dog.
  * @name: Dog's name.
  * @age: The age of the dog.
  * @owner: Dog's Owner.
  *
  * Description: The attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structures.
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
