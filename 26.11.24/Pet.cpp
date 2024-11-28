#include "Pet.h"

Pet::Pet(string name, string type)
{
	this->name = name;
	this->type = type;
}

string Pet::getName()
{
	return this->name;
}

string Pet::getType()
{
	return this->type;
}

void Pet::setName(string name)
{
	this->name = name;

}

void Pet::setType(string type)
{
	this->type = type;
}

Pet::~Pet()
{
}