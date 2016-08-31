#include <iostream>
#include "dinosaurHeader.h"

// passing by value
// passing by reference

void main() {
	//char newname = "notasaurus";
	//int newhight = 0;
	//float newexistance = 0;
	//spawn(newname, newhight, newexistance);
	//printf("Your dinosaur is %c.\n It is %dft high.\n It existed %f billion years.\n", newname, newhight, newexistance);
	//system("pause");
	const int aray = 3;
	Dinosaur myDino[aray];
	for (int i = 0; i < aray; ++i) {
		myDino[i] = spawn();
		// BEFORE shrinking
		print(myDino[i]);

		shrinkDino(myDino[i]);

		// AFTER shrinking
		print(myDino[i]);
	}
	printf("PROGRAM EXIT ");
	system("pause");
}