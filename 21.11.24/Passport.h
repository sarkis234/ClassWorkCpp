#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Date.h"
class Passport
{
protected:
	string fio;
	Date date;
	int number;
	int serie;
	string gived;
public:
	Passport(string, Date, int, int, string);
	string getFio();
	Date getDate();
	int getNumber();
	int getSerie();
	string getGived();
	void setFio(string);
	void setDate(Date);
	void setNumber(int);
	void setSerie(int);
	void setGived(string);
	void printPas();
	~Passport();
};

