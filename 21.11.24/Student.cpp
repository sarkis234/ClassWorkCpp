#include "Student.h"

Student::Student(string fio, string subject, int course, int grpNum)
{
    this->fio = fio;
    this->subject = subject;
    this->course = course;
    this->grpNum = grpNum;
}

string Student::getFio()
{
    return this->fio;
}

string Student::getSubject()
{
    return this->subject;
}

int Student::getCourse()
{
    return this->course;
}

int Student::getGrpNum()
{
    return this->grpNum;
}

void Student::setFio(string fio)
{
    this->fio = fio;
}

void Student::setSubject(string subject)
{
    this->subject = subject;
}

void Student::setCourse(int course)
{
    this->course = course;
}

void Student::setGrpNum(int grpNum)
{
    this->grpNum = grpNum;
}

void Student::print()
{
    cout << "FIO: " << this->fio << endl;
    cout << "Subject: " << this->subject << endl;
    cout << "Course: " << this->course << endl;
    cout << "Group Number: " << this->grpNum << endl;
}

Student::~Student()
{
}
