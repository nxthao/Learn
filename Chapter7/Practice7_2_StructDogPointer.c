#include <stdio.h>

struct dog
{
	char name[10];
	char breed[10];
	int age;
	char color[10];
};

void main()
{
	struct dog my_dog = { "slack", "BullDog", 7, "Blue" };
	struct dog* p;
	p = &my_dog;
	printf("Name of the dog %s\n", p->name);
	printf("Breed of the dog %s\n", p->breed);
	printf("Age of the dog %d\n", p->age);
	printf("Color of the dog %s\n", p->color);

	//another dog have the same Breed and color, however it is different name and more 1 age;
	strcpy(p->name,"Poll");
	p->age++;
	printf("Name of the dog %s\n", p->name);
	printf("Breed of the dog %s\n", p->breed);
	printf("Age of the dog %d\n", p->age);
	printf("Color of the dog %s\n", p->color);
}