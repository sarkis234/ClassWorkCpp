#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream in;
	in.open("in.txt");
	ofstream out;
	out.open("out.txt", ios::app);
	string line;
	/*if (in.is_open()) {
		while (in >> line)
		{
			int count = 0;
			for (int i = 0; line[i] != '\0'; i++) {
				count++;
			}
			if (count >= 7) {
				out << line << " ";
			}
			count = 0;
		}
	}*/
	int count = 0;
	if (in.is_open()) {
		while (getline(in, line))
		{
			count++;
		}
	}
	in.close();
	string* arr = new string[count];
	count = 0;
	in.open("in.txt");
	if (in.is_open()) {
		while (getline(in, line))
		{
			arr[count] = line;
			count++;
		}
	}
	in.close();
	for (int i = count - 1; i >= 0; i--) {
		out << arr[i] << endl;
	}
	out.close();
}