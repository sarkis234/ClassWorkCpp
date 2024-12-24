#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Teacher.h"
#include "Group.h"

class Academy
{
protected:
	Teacher** teachers;
	Group** groups;
};

