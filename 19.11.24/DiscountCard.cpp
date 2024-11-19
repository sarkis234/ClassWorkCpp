#include "DiscountCard.h"

DiscountCard::DiscountCard()
{

	this->number = this->id++;
	this->balance = 100;
}

DiscountCard::~DiscountCard()
{
}

int DiscountCard::getBalance()
{
	return this->balance;
}

int DiscountCard::getNumber()
{
	return this->number;
}

void DiscountCard::setBalance(int bal)
{
	this->balance = bal;
}
