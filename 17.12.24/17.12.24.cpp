#include <iostream>
#include "myNs.h";

int main()
{
	int** arr;
	int row = 3;
	int col = 3;
	arr = myNs::memory(row, col);
	try
	{
		myNs::fill(arr, row, col);
	}
	catch (const char* ex)
	{
		std::cout << "cin fail" << std::endl;
	}
	myNs::print(arr, row, col);
	myNs::sort(arr, row, col);
	myNs::print(arr, row, col);
	try {
		myNs::sum(arr, row, col, arr, row, col);
	}
	catch(const char* ex) {
		std::cout << "not equal" << std::endl;
	}
	myNs::mult(arr, row, col, 2);
	myNs::print(arr, row, col);
	myNs::trans(arr, row, col);
	myNs::print(arr, row, col);
}
