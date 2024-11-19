#pragma once
#include <iostream>
using namespace std;
#include <string>

class Product
{
private:
	string name;
	int price;
public:
	Product();
	Product(string, int);
	~Product();
};