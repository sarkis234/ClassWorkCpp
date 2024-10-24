#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
class Point {
private:
	int x;
	int y;
	int z;
public:
	Point(int, int, int);
	~Point();
	int getX();
	int getY();
	int getZ();
	void printPoint();
	void saveFile(string);
	void setX(int);
	void setY(int);
	void setZ(int);
	void getFile(string);
	float lineLength(Point);
};