#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

class Parrot : public Pet
{
private:
	int featherLong;
public:
	Parrot(string, string, int);
	int getFeatherLong();
	void setFeatherLong(int);
	virtual void showSound();
	virtual void show();
	virtual void showType();
	~Parrot();
};

