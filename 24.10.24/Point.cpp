#include "Point.h"

Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Point::~Point()
{
}

int Point::getX()
{
	return this->x;
}

int Point::getY()
{
	return this->y;
}

int Point::getZ()
{
	return this->z;
}

void Point::printPoint() {
	cout << "x: " << this->getX() << endl;
	cout << "y: " << this->getY() << endl;
	cout << "z: " << this->getZ() << endl;
}

void Point::saveFile(string path) {
	ofstream out;
	out.open(path);
	out << this->x << " " << this->y << " " << this->z;
	out.close();
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

void Point::setZ(int z)
{
	this->z = z;
}

void Point::getFile(string path) {
	ifstream in;
	in.open(path);
	int xFile, yFile, zFile;
	if (in.is_open()) {
		in >> xFile >> yFile >> zFile;
		this->x = xFile;
		this->y = yFile;
		this->z = zFile;
	}
}

float Point::lineLength(Point point2) {
	float line = sqrt((point2.x - this->x) * (point2.x - this->x) + (point2.y - this->y) * (point2.y - this->y) + (point2.z - this->z) * (point2.z - this->z));
	return line;
}
