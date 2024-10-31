#include "Worker.h"

Worker::Worker()
{
}

Worker::Worker(string name, string surname, string fatherName, string job, int year, int salary)
{
	this->name = name;
	this->surname = surname;
	this->fatherName = fatherName;
	this->job = job;
	this->year = year;
	this->salary = salary;
}

Worker::Worker(Worker& worker)
{
	this->name = worker.name;
	this->surname = worker.surname;
	this->fatherName = worker.fatherName;
	this->job = worker.job;
	this->year = worker.year;
	this->salary = worker.salary;
}

string Worker::getName() const
{
	return this->name;
}

string Worker::getSurname() const
{
	return this->surname;
}

string Worker::getfatherName() const
{
	return this->fatherName;
}

string Worker::getJob() const
{
	return this->job;
}

int Worker::getYear() const
{
	return this->year;
}

int Worker::getSalary() const
{
	return this->salary;
}

void Worker::setName(string name)
{
	this->name = name;
}

void Worker::setSurname(string surname)
{
	this->surname = surname;
}

void Worker::setFatherName(string fatherName)
{
	this->fatherName = fatherName;
}

void Worker::setJob(string job)
{
	this->job = job;
}

void Worker::setYear(int year)
{
	this->year = year;
}

void Worker::setSalary(int salary)
{
	this->salary = salary;
}

void Worker::printWorker() const
{
	cout << "FIO: " << this->name << " " << this->surname << " " << this->fatherName << endl;
	cout << "Job: " << this->job << endl;
	cout << "Start working year: " << this->year << endl;
	cout << "Salary: " << this->salary << endl;
	cout << endl;
}

Worker::~Worker()
{
}
