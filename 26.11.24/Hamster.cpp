#include "Hamster.h"

Hamster::Hamster(string name, string type, int cheekSize) : Pet(name, type)
{
	this->cheekSize = cheekSize;
}

int Hamster::getCheekSize()
{
	return this->cheekSize;
}

void Hamster::setCheekSize(int cheekSize)
{
	this->cheekSize = cheekSize;
}

void Hamster::showSound()
{
	cout << "Firk" << endl;
}

void Hamster::show()
{
	cout << this->name << endl;
}

void Hamster::showType()
{
	cout << "Hamster" << endl;
}

Hamster::~Hamster()
{
}
