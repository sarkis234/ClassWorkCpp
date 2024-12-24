#pragma once
#include <iostream>
using namespace std;
#include <string>
class Human
{
protected:
	string fio;
	int age;
	string phone;
	string login;
	string password;
public:
	Human();
	Human(string, int, string, string, string);
	~Human();
};

