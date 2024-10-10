#include <iostream>
#include "header.h"
using namespace std;
//union MyUnion {
//	int a;
//	unsigned int b;
//};
//int main()
//{
//	MyUnion num;
//	num.a = 10;
//	cout << num.a;
//	num.a = 20;
//	cout << endl << num.b;
//	cout << endl << "Enter num: ";
//	cin >> num.b;
//	cout << num.a << endl;
//	num.a = -10;
//	cout << num.a;
//}

//union MyUnion {
//	int a;
//	bool arr[4];
//
//	void enterNum() {
//		cin >> a;
//	}
//	void printBytes() {
//			for (int i = 0; i < 4; i++) {
//				cout << arr[i] << " ";
//			}
//			cout << endl;
//	}
//	void zeroCount() {
//		int count = 0;
//		for (int i = 0; i < 4; i++) {
//			if (arr[i] == 0) {
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	void byteInfo() {
//		for (int i = 0; i < 4; i++) {
//			cout << i << " byte - ";
//			if (arr[i] == 0) {
//				cout << "zero";
//			}
//			else {
//				cout << "no zero";
//			}
//			cout << endl;
//		}
//	}
//};
//int main()
//{
//	MyUnion num;
//	num.enterNum();
//	num.printBytes();
//	num.zeroCount();
//	num.byteInfo();
//}
#define lowest(a, b) cout << ((a <= b) ? a : b);
#define highest(a, b) cout << ((a >= b) ? a : b);
#define square(a) cout << a * a;
#define degree(a, b) cout << pow(a, b);
#define even(a) cout << ((a % 2 == 0) ? "yes, even" : "no, odd");
#define odd(a) cout << ((a % 2 == 1) ? "yes, odd" : "no, even");
void showArray(int** arr, int size) {
	int a;

}
void fillArray(int** arr, int size) {
	int a;
}
void addColumn(int** arr, int size) {
	int a;
}
int main()
{
	lowest(10, 3);
	cout << endl;
	highest(7, 10);
	cout << endl;
	square(8);
	cout << endl;
	degree(8, 3);
	cout << endl;
	even(7);
	cout << endl;
	odd(2);
}