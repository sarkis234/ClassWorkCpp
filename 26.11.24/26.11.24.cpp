#include <iostream>
using namespace std;
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"
int main()
{
	/*Pet* dog = new Dog("Bob", "Dog", "White");
	dog->showSound();
	delete dog;*/
	Pet** dogs = new Pet*[4];
	dogs[0] = new Dog("Bob", "Dog", "White");
	dogs[1] = new Cat("Karl", "Cat", 10);
	dogs[2] = new Parrot("Sam", "Parrot", 290);
	dogs[3] = new Hamster("Jack", "Hamster", 34);
	for (int i = 0; i < 4; i++) {
		dogs[i]->showSound();
	}

}