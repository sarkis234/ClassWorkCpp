#include "Student.h"

Student::Student(string fio, int age, string phone, string login, string password, vector<MarkList*> markLists) : Human(fio, age, phone, login, password)
{
	this->markLists = markLists;
}

void Student::printStudent()
{
	cout << "Student ";
	this->printHuman();
	for (int i = 0; i < this->markLists.size(); i++) {
		this->markLists[i]->printMarkList();
	}
	cout << endl;
}

void Student::studAvg()
{
	for (int i = 0; i < this->markLists.size(); i++) {
		cout << this->markLists[i]->getSubject();
		cout << " mark: ";
		cout << this->markLists[i]->avg() << endl;
	}
	cout << endl;
}

