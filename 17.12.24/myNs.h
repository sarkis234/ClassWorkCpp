#pragma once
#include <iostream>

namespace myNs {
	int** memory(int, int);
	void fill(int**, int, int);
	void fillAuto(int**, int, int, int, int);
	void print(int**, int, int);
	void arrToMatrix(int**, int*, int, int);
	void matrixToArr(int**, int*, int, int);
	void sort(int**, int, int);
	void sum(int**, int, int, int**, int, int);
	void mult(int**, int, int, int);
	void trans(int**, int, int);
}