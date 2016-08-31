#include <iostream>
#include "dinosaurHeader.h"
Dinosaur spawn()
{
	Dinosaur temp;

	printf("Dinosaur name?...\n");
	scanf_s("%s", temp.name, 80);
	getchar();

	printf("Dinosaur hight?...\n");
	scanf_s("%d", &temp.size);
	getchar();

	printf("How long did it live?...\n");
	scanf_s("%f", &temp.existingTime);
	getchar();

	return temp;
}
void print(const Dinosaur theDino)
{
	printf("%s \n", theDino.name);
	printf("%d \n", theDino.size);
	printf("%f \n", theDino.existingTime);
}
void shrinkDino(Dinosaur &theDino)
{
	theDino.size = 1;
}
