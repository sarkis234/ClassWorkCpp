#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Human.h"
#include "MarkList.h"

class Student : public Human 
{
	MarkList** markLists;
};

