#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker
{
private:
	string name;
	string surname;
	string fatherName;
	string job;
	int year;
	int salary;
public:
	explicit Worker();
	explicit Worker(string, string, string, string, int, int);
	Worker(Worker&);
	string getName() const;
	string getSurname() const;
	string getfatherName() const;
	string getJob() const;
	int getYear() const;
	int getSalary() const;
	void setName(string);
	void setSurname(string);
	void setFatherName(string);
	void setJob(string);
	void setYear(int);
	void setSalary(int);
	void printWorker() const;
	~Worker();
};

