#ifndef _DOG_
#define _DOG_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog struct
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Description: creates a new dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_ */
