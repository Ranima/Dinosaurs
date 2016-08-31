#pragma once
struct Dinosaur
{
	int size = 0;
	char name[80];
	float existingTime = 0;
};
Dinosaur spawn();
void print(const Dinosaur theDino);
void shrinkDino(Dinosaur &theDino);