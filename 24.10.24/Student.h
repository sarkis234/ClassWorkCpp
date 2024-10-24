#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
	string name;
	string surname;
	string fathName;
	string city;
	string country;
	string schlName;
	string telNum;
	string schlCountry;
	string schlCity;
	int grpId;
public:
	Student(string, string, string, string, string, string, string, string, string, int);
	~Student();
	string getName();
	string getSurname();
	string getFathName();
	string getCity();
	string getCountry();
	string getSchlName();
	string getTelNum();
	string getSchlCountry();
	string getSchlCity();
	int getGrpId();
	void printStudent();
	void setName(string);
	void setSurname(string);
	void setFatherName(string);
	void setCity(string);
	void setCountry(string);
	void setSchlName(string);
	void setSchlCountry(string);
	void setSchlCity(string);
	void setGrpId(int);
};

