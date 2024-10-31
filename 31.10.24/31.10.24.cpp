#include <iostream>
#include <string>
#include "Book.h"
#include "Worker.h"
using namespace std;

void CreatorBooks(Book* books, string creator, int size)
{
	for (int i = 0; i < size; i++) {
		if (books[i].getCreator() == creator) {
			books[i].printBook();
		}
	}
}

void PublishBooks(Book* books, string publish, int size)
{
	for (int i = 0; i < size; i++) {
		if (books[i].getPublish() == publish) {
			books[i].printBook();
		}
	}
}

void YearBooks(Book* books, int year, int size)
{
	for (int i = 0; i < size; i++) {
		if (books[i].getYear() >= year) {
			books[i].printBook();
		}
	}
}

void yearWorkers(Worker* workers, int year, int size) {
	for (int i = 0; i < size; i++) {
		if ((2024 - workers[i].getYear()) >= year) {
			workers[i].printWorker();
		}
	}
}

void salaryWorkers(Worker* workers, int salary, int size) {
	for (int i = 0; i < size; i++) {
		if (workers[i].getSalary() >= salary) {
			workers[i].printWorker();
		}
	}
}

void jobWorkers(Worker* workers, string job, int size) {
	for (int i = 0; i < size; i++) {
		if (workers[i].getJob() == job) {
			workers[i].printWorker();
		}
	}
}

int main()
{
	const int SIZE = 5;
	/*Book book1("Pushkin", "derevo", "Moscow", 1900, 100);
	Book book2("Lermontov", "tuchya", "Rostov", 1850, 160);
	Book book3("Pushkin", "Capitanskaya dochka", "Moscow", 1910, 310);
	Book book4("Pushkin", "Les", "Petersburg", 1880, 250);
	Book book5("Tuchev", "Roshya", "Volgograd", 1820, 500);
	Book books[SIZE]{book1, book2, book3, book4, book5};
	CreatorBooks(books, "Pushkin", SIZE);
	cout << endl << endl;
	PublishBooks(books, "Moscow", SIZE);
	cout << endl << endl;
	YearBooks(books, 1875, SIZE);*/
	Worker worker1("Ivan", "Ivanov", "Ivanovich", "buhgalter", 2010, 30000);
	Worker worker2("Petr", "Petrov", "Petrovich", "buhgalter", 2021, 45000);
	Worker worker3("Oleg", "Morozov", "Olegovich", "ITshnik", 2015, 80000);
	Worker worker4("Ivan", "Petrov", "Ivanovich", "boss", 2010, 5000);
	Worker worker5("Sanya", "Morozov", "Ivanovich", "buhgalter", 2008, 15000);
	Worker workers[SIZE]{ worker1, worker2, worker3, worker4, worker5 };
	yearWorkers(workers, 10, SIZE);
	cout << endl << endl;
	salaryWorkers(workers, 40000, SIZE);
	cout << endl << endl;
	jobWorkers(workers, "buhgalter", SIZE);
}
