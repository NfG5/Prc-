#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", (*d).name);
		else 
			printf("Name: (nil)");

		if (d->age)
			printf("Age: %f\n", (*d).age);
		else
			printf("Age: (nil)");

		if (d->owner)
			printf("Owner: %s\n", (*d).owner);

	}
}
