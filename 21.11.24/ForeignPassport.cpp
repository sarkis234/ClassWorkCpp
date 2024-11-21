#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string fio, Date date, int number, int serie, string gived, string country) : Passport(fio, date, number, serie, gived)
{
	this->country = country;
}

string ForeignPassport::getCountry()
{
	return this->country;
}

void ForeignPassport::setCountry(string country)
{
	this->country = country;
}

void ForeignPassport::printForPas()
{
	this->printPas();
	cout << "Country: " << this->country;
}

ForeignPassport::~ForeignPassport()
{
}
