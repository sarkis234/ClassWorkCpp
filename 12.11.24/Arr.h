#pragma once
#include <iostream>
using namespace std;

class Arr
{
private:
	int size;
	int length;
	int* arr;

public:
	Arr();
	Arr(int, int*);
	//Arr(Arr&);
	int getSize();
	int* getArr();
	int getLength();
	void print();
	void setSize(int);
	void setArr(int*);
	int find(int);
	void pushBack(int);
	Arr operator+(Arr&);
	Arr operator-(Arr&);
	Arr operator*(Arr&);
	Arr operator/(Arr&);
	bool operator==(Arr&);
	bool operator!=(Arr&);
	bool operator>(Arr&);
	bool operator<(Arr&);
	bool operator>=(Arr&);
	bool operator<=(Arr&);
	Arr operator=(Arr);
	Arr operator+=(Arr&);
	~Arr();
};

