#include "Parrot.h"

Parrot::Parrot(string name, string type, int featherLong) : Pet(name, type)
{
	this->featherLong = featherLong;
}

int Parrot::getFeatherLong()
{
	return this->featherLong;
}

void Parrot::setFeatherLong(int featherLong)
{
	this->featherLong = featherLong;
}

void Parrot::showSound()
{
	cout << "Kykareky" << endl;
}

void Parrot::show()
{
	cout << this->name << endl;
}

void Parrot::showType()
{
	cout << "Parrot" << endl;
}

Parrot::~Parrot()
{
}
