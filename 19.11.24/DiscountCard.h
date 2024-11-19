#pragma once
#include <iostream>
using namespace std;

class DiscountCard
{
private:
	int balance;
	int number;
public:
	static int id;
	DiscountCard();
	~DiscountCard();
	int getBalance();
	int getNumber();
	void setBalance(int);
};

