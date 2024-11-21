#include <iostream>
using namespace std;
#include "Aspirant.h"
#include "ForeignPassport.h"
void operator<<(ostream& out, Aspirant aspirant) {
	aspirant.printAsp();
}

void operator<<(ostream& out, ForeignPassport passport) {
	passport.printForPas();
}
int main()
{
	Aspirant asp1("testa b c", "a b c", "maths", 2, 432);
	cout << asp1;
	Date date(12, 10, 2020);
	cout << endl << endl;
	ForeignPassport pas1("a b c", date, 21, 10, "Russia", "Spain");
	cout << pas1;
}
