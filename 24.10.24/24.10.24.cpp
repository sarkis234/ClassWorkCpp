#include <iostream>
#include <string>
#include "Student.h"
#include "Point.h"
using namespace std;

int main()
{
	Student obj2("Ivan", "Ivanov", "Ivanovich", "New York", "USA", "NY University", "89998887766", "USA", "New York", 45);
	obj2.printStudent();
	cout << endl;
	Point obj3(10, 5, 7);
	Point obj4(15, 5, 7);
	obj3.printPoint();
	cout << endl;
	/*obj3.saveFile("out.txt");
	obj3.getFile("Test.txt");
	obj3.printPoint();*/
	obj4.printPoint();
	cout << endl;
	cout << obj3.lineLength(obj4);
}
