#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Passport.h"

class ForeignPassport : Passport
{
private:
	string country;
public:
	ForeignPassport(string, Date, int, int, string, string);
	string getCountry();
	void setCountry(string);
	void printForPas();
	~ForeignPassport();
};

