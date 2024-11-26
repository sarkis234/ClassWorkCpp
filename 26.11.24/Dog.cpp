#include "Dog.h"

Dog::Dog(string name, string type, string color) : Pet(name, type)
{
	this->color = color;
}

string Dog::getColor()
{
	return this->color;
}

void Dog::setColor(string color)
{
	this->color = color;
}

void Dog::showSound()
{
	cout << "Gav" << endl;
}

void Dog::show()
{
	cout << this->name << endl;
}

void Dog::showType()
{
	cout << "Dog" << endl;
}

Dog::~Dog()
{
}
