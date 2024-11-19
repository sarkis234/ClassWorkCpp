#pragma once
#include <iostream>
using namespace std;
#include "Customer.h"
#include "Product.h"

class Supermarket
{
private:
	Customer* customers;
	Product* products;
	int custSize;
	int prodSize;
public:
	Supermarket();
	Supermarket(Customer*, Product*, int, int);

	void addCustomer(string);
	void addProduct(string, int);

	~Supermarket();
};

