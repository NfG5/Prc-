#ifndef DOG_H
#define DOG_H

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif

#ifndef MAIN_H
#define MAIN_H

void print_dog(struct dog *d);

#endif
