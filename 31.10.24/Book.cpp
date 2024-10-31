#include "Book.h"

Book::Book()
{
}

Book::Book(string creator, string name, string publish, int year, int pageNum)
{
	this->creator = creator;
	this->name = name;
	this->publish = publish;
	this->year = year;
	this->pageNum = pageNum;
}

Book::Book(Book& Book)
{
	this->creator = Book.creator;
	this->name = Book.name;
	this->publish = Book.publish;
	this->year = Book.year;
	this->pageNum = Book.pageNum;
}

string Book::getCreator() const
{
	return this->creator;
}

string Book::getName() const
{
	return this->name;
}

string Book::getPublish() const
{
	return this->publish;
}

int Book::getYear() const
{
	return this->year;
}

int Book::getPageNum() const
{
	return this->pageNum;
}

void Book::setCreator(string creator)
{
	this->creator = creator;
}

void Book::setName(string name)
{
	this->name = name;
}

void Book::setPublish(string)
{
	this->publish = publish;
}

void Book::setYear(int)
{
	this->year = year;
}

void Book::setPageNum(int)
{
	this->pageNum = pageNum;
}

void Book::printBook() const
{
	cout << "Book creator: " << this->creator << endl;
	cout << "Book name: " << this->name << endl;
	cout << "Book publish: " << this->publish << endl;
	cout << "Year book created: " << this->year << endl;
	cout << "Number of pages: " << this->pageNum << endl;
	cout << endl;
}

Book::~Book()
{
}
