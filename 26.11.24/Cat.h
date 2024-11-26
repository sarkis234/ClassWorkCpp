#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

class Cat : public Pet
{
private:
	int mustLong;
public:
	Cat(string, string, int);
	int getMustLong();
	void setMustLong(int);
	virtual void showSound();
	virtual void show();
	virtual void showType();
	~Cat();
};

