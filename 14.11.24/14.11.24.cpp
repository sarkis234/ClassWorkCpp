#include <iostream>
#include "Arr.h"
using namespace std;

template <typename T>
void operator>>(istream& in, Arr<T>& arr) {
	in >> arr.size;
	delete[] arr.arr;
	arr.arr = new int[arr.size];
	for (int i = 0; i < arr.size; i++) {
		in >> arr.arr[i];
	}
}

template <typename T>
void operator<<(ostream& out, Arr<T>& arr) {
	for (int i = 0; i < arr.size; i++) {
		cout << arr.arr[i] << " ";
	}
}

template <typename T>
T avg(T* arr, int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int main()
{
	int array[5];
	int* array1 = new int[5];
	for (int i = 1; i <= 5; i++) {
		array1[i - 1] = i;
	}
	int* array2 = new int[7];
	for (int i = 7, count = 0; i > 0; i--, count++) {
		array2[count] = i;
	}
	Arr<int> arr1(5, array1);
	Arr<int> arr2(7, array2);
	/*(arr1 + arr2).print();
	(arr1 - arr2).print();
	(arr1 * arr2).print();
	(arr1 / arr2).print();
	cout << (arr1 == arr2);
	cout << endl;
	cout << (arr1 != arr2);
	cout << endl;
	cout << (arr1 > arr2);
	cout << endl;
	cout << (arr1 < arr2);
	cout << endl;
	cout << (arr1 >= arr2);
	cout << endl;
	cout << (arr1 <= arr2);
	cout << endl;*/
	/*arr1 += arr2;
	arr1.print();*/
	//cout << arr1.find(1) << endl;
	//arr2.print();
	//cout << endl;
	//arr2();
	//arr2.print();
	//cout << endl << arr2[3] << endl;
	//cin >> arr2;
	//cout << arr2;
	arr2.remove(0);
	arr2.print();
	arr2.reverse();
	arr2.print();
	/*int* arr = new int[5]{ 1, 2, 3, 4, 5 };
	cout << avg(arr, 5);*/
}

