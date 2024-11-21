#include "Date.h"

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 2000;
}

Date::Date(int day, int month, int year)
{
	if (day > 30) day = 30;
	if (month > 12) month = 12;
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::print()
{
	cout << this->day << "." << this->month << "." << this->year << endl;
}

Date::~Date()
{
}
