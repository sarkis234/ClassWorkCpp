#include <iostream>
#include "Stack.h";
using namespace std;

int main()
{
	int* arr = new int[4] { 1, 2, 3, 4 };
	Stack<int> stack(arr, 4);
	cout << stack.top();
}
