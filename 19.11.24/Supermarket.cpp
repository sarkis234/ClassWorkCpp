#include "Supermarket.h"

Supermarket::Supermarket()
{
	this->customers = new Customer[3];
	this->custSize = 3;
	this->products = new Product[3];
	this->prodSize = 3;
}

Supermarket::Supermarket(Customer* customers, Product* products, int custSize, int prodSize)
{
	this->customers = new Customer[custSize];
	this->custSize = custSize;
	this->products = new Product[prodSize];
	this->prodSize = prodSize;
}

void Supermarket::addCustomer(string name)
{
	this->custSize++;
	Customer* buf = new Customer[custSize];
	for (int i = 0; i < custSize - 1; i++) {
		buf[i] = this->customers[i];
	}
	buf[custSize] = Customer(name);
	delete[] this->customers;
	this->customers = buf;
}

void Supermarket::addProduct(string name, int price)
{
	this->prodSize++;
	Product* buf = new Product[prodSize];
	for (int i = 0; i < prodSize - 1; i++) {
		buf[i] = this->products[i];
	}
	buf[prodSize] = Product(name, price);
	delete[] this->products;
	this->products = buf;
}

Supermarket::~Supermarket()
{
}
