#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Human.h"
#include "Group.h"

class Teacher : public Human
{
	Group* groups;
};

