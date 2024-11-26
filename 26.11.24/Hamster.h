#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

class Hamster : public Pet
{
private:
	int cheekSize;
public:
	Hamster(string, string, int);
	int getCheekSize();
	void setCheekSize(int);
	virtual void showSound();
	virtual void show();
	virtual void showType();
	~Hamster();
};

