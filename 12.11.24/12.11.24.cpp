#include <iostream>
#include "Arr.h"
using namespace std;
   
int main()
{
	int* array1 = new int[5];
	for (int i = 1; i <= 5; i++) {
		array1[i-1] = i;
	}
	int* array2 = new int[7];
	for (int i = 1; i <= 7; i++) {
		array2[i - 1] = i;
	}
	Arr arr1(5, array1);
	Arr arr2(7, array2);
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
	arr1 += arr2;
	arr1.print();
	

}
