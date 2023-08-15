#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints details of dog
 * @d - struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
