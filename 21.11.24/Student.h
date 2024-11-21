#pragma once
#include <iostream>
using namespace std;
#include <string>

class Student
{
protected:
	string fio;
	string subject;
	int course;
	int grpNum;
public:
	Student(string, string, int, int);
	string getFio();
	string getSubject();
	int getCourse();
	int getGrpNum();
	void setFio(string);
	void setSubject(string);
	void setCourse(int);
	void setGrpNum(int);
	void print();
	~Student();
};

