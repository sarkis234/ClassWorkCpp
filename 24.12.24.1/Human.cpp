#include "Human.h"

Human::Human()
{
	this->fio = "Ivan Ivanov Ivanovich";
	this->age = 20;
	this->phone = "+7 777 777 77 77";
	this->login = "qwerty";
	this->password = "1234567";
}

Human::Human(string fio, int age, string phone, string login, string password)
{
	this->fio = fio;
	this->age = age;
	this->phone = phone;
	this->login = login;
	this->password = password;
}

Human::~Human()
{
}
