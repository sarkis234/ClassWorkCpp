#include "Customer.h"

Customer::Customer()
{
}

Customer::Customer(string name)
{
	this->name = name;
}

Customer::~Customer()
{
}

int Customer::getCardBalance()
{
	return this->card.getBalance();
}

int Customer::getCardNumber()
{
	return this->card.getNumber();
}
