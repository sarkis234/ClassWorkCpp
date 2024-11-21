#include "Aspirant.h"

Aspirant::Aspirant(string examTheme, string fio, string subject, int course, int grpNum) : Student(fio, subject, course, grpNum)
{
	this->examTheme = examTheme;
}

string Aspirant::getExamTheme()
{
	return this->examTheme;
}

void Aspirant::setExamTheme(string examTheme)
{
	this->examTheme = examTheme;
}

void Aspirant::printAsp()
{
	this->print();
	cout << "Exam theme: " << this->examTheme << endl;
}

Aspirant::~Aspirant()
{
}
