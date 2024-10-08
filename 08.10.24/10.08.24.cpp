#include <iostream>
#include <cmath>
using namespace std;

//union MyUnion {
//	int num;
//	unsigned char bytes[4];
//	void enterNum() {
//		cin >> num;
//	};
//	void printBytes(MyUnion num) {
//		for (int i = 0; i < 4; i++) {
//			cout << int(bytes[i]) << " ";
//		}
//		cout << endl;
//	}
//	void selectBytes(MyUnion num, int index) {
//		cout << int(bytes[index]) << endl;
//	}
//	void printBytes16(MyUnion num) {
//		for (int i = 0; i < 4; i++) {
//			printf("%x", bytes[i]);
//		}
//	}
//};
//
//int main()
//{
//	MyUnion num;
//	num.enterNum();
//	num.printBytes(num);
//	num.selectBytes(num, 2);
//	num.printBytes16(num);
//
//}


//struct Calc {
//	int a, b;
//	char oper;
//	void enterA() {
//		cin >> a;
//	}
//	void enterB() {
//		cin >> b;
//	}
//	void enterOper() {
//		cin >> oper;
//	}
//	int plus() {
//		return a + b;
//	}
//	int minus() {
//		return a - b;
//	}
//	int multiply() {
//		return a * b;
//	}
//	int devide() {
//		if (b == 0) {
//			return -1;
//		}
//		else {
//			return a / float(b);
//		}
//	}
//	int operation() {
//		switch (oper) {
//		case '+':
//			return plus();
//			break;
//		case '-':
//			return minus();
//			break;
//		case '*':
//			return multiply();
//			break;
//		case '/':
//			return devide();
//			break;
//		default:
//			return -1;
//		}
//	}
//};
//
//int main()
//{
//	Calc calc;
//	calc.enterA();
//	calc.enterB();
//	calc.enterOper();
//	cout << calc.operation();
//}

typedef struct Coord {
	int x;
	int y;
	void enterX() {
		cin >> x;
	}
	void enterY() {
		cin >> y;
	}
	float path(Coord b) {
		return sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
	}
};
float countPath(Coord a, Coord b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

typedef struct Rectangle {
	Coord x;
	Coord y;
	Coord x2;
	Coord y2;
	void enter() {
		cin >> x.x >> x.y >> y.x >> y.y >> x2.x >> x2.y >> y2.x >> y2.y;
	}
	int ploshad() {
		return countPath(x, x2) * countPath(y, y2);
	}
};
int main()
{
	/*Coord a;
	a.enterX();
	a.enterY();
	Coord b;
	b.enterX();
	b.enterY();
	cout << a.path(b) << endl << countPath(a, b) << endl;*/
	Rectangle pryam;
	pryam.enter();
	cout << pryam.ploshad();
}