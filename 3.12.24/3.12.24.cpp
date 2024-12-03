#include <iostream>
using namespace std;
#include "List.h";

int main()
{
	List<int> list;
	list.pushBack(1);
	list.pushStart(2);
	list.pushStart(3);
	list.pushStart(4);
	list.pushStart(4);
	list.pushStart(4);
	list.pushStart(4);
	list.print();
	list.popBack();
	list.print();
	list.popStart();
	list.print();
	cout << list[1] << endl;
	int* arr = list();
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}