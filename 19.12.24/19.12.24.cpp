#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string enWord, ruWord, line;
	map<string, string> text;
	string path1 = "dict.txt";
	string path2 = "ru.txt";
	string path3 = "en.txt";
	ifstream in(path1);
	int count = 0;
	if (in.is_open())
	{
		while (getline(in, enWord, ':'))
		{
			getline(in, ruWord);
			text.insert({ enWord, ruWord });
			//cout << text[enWord];
			
		}
	}
	in.close();
	ifstream in2(path3);
	ofstream out(path2);
	if (in2.is_open())
	{
		cout << "test";
		while (in2 >> enWord)
		{
			if (enWord[enWord.length()] == ',') {

			}
			if (text.count(enWord)) {
				ruWord = text[enWord];
			}
			else {
				ruWord = enWord;
			}
			out << ruWord << " ";
		}
	}
}