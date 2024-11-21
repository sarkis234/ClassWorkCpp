#pragma once
#include <iostream>
#include "Student.h"
#include <string>

class Aspirant : public Student
{
private:
	string examTheme;
public:
	Aspirant(string, string, string, int, int);
	string getExamTheme();
	void setExamTheme(string);
	void printAsp();
	~Aspirant();
};

