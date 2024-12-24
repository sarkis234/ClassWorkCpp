#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Group.h"
#include "Teacher.h"
#include "Time.h"

class Lesson
{
	Group* group;
	Teacher* teacher;
	string subject;
	Time time;
};

