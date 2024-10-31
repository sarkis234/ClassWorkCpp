#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string creator;
	string name;
	string publish;
	int year;
	int pageNum;
public:
	explicit Book();
	explicit Book(string, string, string, int, int);
	Book(Book&);
	string getCreator() const;
	string getName() const;
	string getPublish() const;
	int getYear() const;
	int getPageNum() const;
	void setCreator(string);
	void setName(string);
	void setPublish(string);
	void setYear(int);
	void setPageNum(int);
	void printBook() const;
	~Book();
};

