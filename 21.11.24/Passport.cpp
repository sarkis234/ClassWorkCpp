#include "Passport.h"

Passport::Passport(string fio, Date date, int number, int serie, string gived)
{
	this->fio = fio;
	this->date = date;
	this->number = number;
	this->serie = serie;
	this->gived = gived;
}

string Passport::getFio()
{
	return this->fio;
}

Date Passport::getDate()
{
	return this->date;
}

int Passport::getNumber()
{
	return this->number;
}

int Passport::getSerie()
{
	return this->serie;
}

string Passport::getGived()
{
	return this->gived;
}

void Passport::setFio(string fio)
{
	this->fio = fio;
}

void Passport::setDate(Date date)
{
	this->date = date;
}

void Passport::setNumber(int number)
{
	this->number = number;
}

void Passport::setSerie(int serie)
{
	this->serie = serie;
}

void Passport::setGived(string gived)
{
	this->gived = gived;
}

void Passport::printPas()
{
	cout << "FIO: " << this->fio << endl;
	cout << "Number: " << this->number << endl;
	cout << "Serie: " << this->serie << endl;
	cout << "Birth date: ";
	this->date.print();
	cout << "Gived: " << this->gived << endl;
}

Passport::~Passport()
{
}
