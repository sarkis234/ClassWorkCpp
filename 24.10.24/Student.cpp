#include "Student.h"

Student::Student(string name, string surname, string fathName, string city, string country, string schlName, string telNum, string schlCountry, 
    string schlCity, int grpId)
{
    this->name = name;
    this->surname = surname;
    this->fathName = fathName;
    this->city = city;
    this->country = country;
    this->schlName = schlName;
    this->telNum = telNum;
    this->schlCountry = schlCountry;
    this->schlCity = schlCity;
    this->grpId = grpId;
}

Student::~Student()
{
}

string Student::getName()
{
    return this->name;
}

string Student::getSurname()
{
    return this->surname;
}

string Student::getFathName()
{
    return this->fathName;
}

string Student::getCity()
{
    return this->city;
}

string Student::getCountry()
{
    return this->country;
}

string Student::getSchlName()
{
    return this->schlName;
}

string Student::getTelNum()
{
    return this->telNum;
}

string Student::getSchlCountry()
{
    return this->schlCountry;
}

string Student::getSchlCity()
{
    return this->schlCity;
}

int Student::getGrpId()
{
    return this->grpId;
}

void Student::printStudent()
{
    cout << "Full name: " << this->getSurname() << " " << this->getName() << " " << this->getFathName() << endl;
    cout << "Phone number: " << this->getTelNum() << endl;
    cout << "Living city: " << this->getCity() << endl;
    cout << "Living country: " << this->getCountry() << endl;
    cout << "School name: " << this->getSchlName() << endl;
    cout << "School country: " << this->getSchlCountry() << endl;
    cout << "School city: " << this->getSchlCity() << endl;
    cout << "Group number: " << this->getGrpId() << endl;
}
void Student::setName(string name)
{
    this->name = name;
}

void Student::setSurname(string surname)
{
    this->surname = surname;
}

void Student::setFatherName(string fathName)
{
    this->fathName = fathName;
}

void Student::setCity(string city)
{
    this->city = city;
}

void Student::setCountry(string country)
{
    this->country = country;
}

void Student::setSchlName(string schlName)
{
    this->schlName = schlName;
}

void Student::setSchlCountry(string schlCountry)
{
    this->schlCountry = schlCountry;
}

void Student::setSchlCity(string schlCity)
{
    this->schlCity = schlCity;
}

void Student::setGrpId(int grpId)
{
    this->grpId = grpId;
}
