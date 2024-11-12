#include "Arr.h"

Arr::Arr()
{
}

Arr::Arr(int size, int* arr)
{
	this->arr = arr;
	this->size = size;
}

/*Arr::Arr(Arr& arr)
{
	this->arr = arr.arr;
	this->size = arr.size;
}*/

int Arr::getSize()
{
	return this->size;
}

int* Arr::getArr()
{
	return this->arr;
}

int Arr::getLength()
{
	return this->length;
}

void Arr::print()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
	cout << endl;
}

void Arr::setSize(int size)
{
	this->size = size;
}

void Arr::setArr(int* arr)
{
	this->arr = arr;
}

int Arr::find(int elem)
{
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] == elem) {
			return i;
		}
	}
	return -1;
}

void Arr::pushBack(int newElem)
{
	int* buf = new int[this->size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = this->arr[i];
	}
	buf[size] = newElem;
	delete[] this->arr;
	this->arr = buf;
	this->size = size;
}

Arr Arr::operator+(Arr& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + arr.arr[i];
	}
	return Arr{ this->size, newArr };
}

Arr Arr::operator-(Arr& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - arr.arr[i];
	}
	return Arr{ this->size, newArr };
}

Arr Arr::operator*(Arr& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * arr.arr[i];
	}
	return Arr{ this->size, newArr };
}

Arr Arr::operator/(Arr& arr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] / arr.arr[i];
	}
	return Arr{ this->size, newArr };
}

bool Arr::operator==(Arr& arr)
{
	if (this->size != arr.size) {
		return false;
	}
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != arr.arr[i]) {
			return false;
		}
	}
	return true;
}

bool Arr::operator!=(Arr& arr)
{
	if (this->size != arr.size) {
		return true;
	}
	for (int i = 0; i < size; i++) {
		if (this->arr[i] != arr.arr[i]) {
			return true;
		}
	}
	return false;
}

bool Arr::operator>(Arr& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 > sum2) {
		return true;
	}
	return false;
}

bool Arr::operator<(Arr& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 < sum2) {
		return true;
	}
	return false;
}

bool Arr::operator>=(Arr& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 >= sum2) {
		return true;
	}
	return false;
}

bool Arr::operator<=(Arr& arr)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < this->size; i++) {
		sum1 += this->arr[i];
	}
	for (int i = 0; i < arr.size; i++) {
		sum2 += arr.arr[i];
	}
	if (sum1 <= sum2) {
		return true;
	}
	return false;
}

Arr Arr::operator=(Arr arr)
{
	delete[] this->arr;
	this->arr = arr.arr;
	this->size = arr.size;
	return *this;
}

Arr Arr::operator+=(Arr& arr)
{
	*this = ( * this + arr);
	return *this;
}

Arr::~Arr()
{
}
