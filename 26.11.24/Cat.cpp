#include "Cat.h"

Cat::Cat(string name, string type, int mustLong) : Pet(name, type)
{
	this->mustLong = mustLong;
}

int Cat::getMustLong()
{
	return this->mustLong;
}

void Cat::setMustLong(int mustLong)
{
	this->mustLong = mustLong;
}

void Cat::showSound()
{
	cout << "Meow" << endl;
}

void Cat::show()
{
	cout << this->name << endl;
}

void Cat::showType()
{
	cout << "Cat" << endl;
}

Cat::~Cat()
{
}
