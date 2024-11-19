#pragma once
#include <iostream>
#include <string>
using  namespace std;
#include "DiscountCard.h"

class Customer
{
private:
	string name;
	DiscountCard card;
public:
	Customer();
	Customer(string);
	~Customer();
	int getCardBalance();
	int getCardNumber();
};

