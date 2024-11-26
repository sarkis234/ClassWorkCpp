#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

class Dog : public Pet
{
private:
	string color;
public:
	Dog(string, string, string);
	string getColor();
	void setColor(string);
	virtual void showSound();
	virtual void show();
	virtual void showType();
	~Dog();

};

