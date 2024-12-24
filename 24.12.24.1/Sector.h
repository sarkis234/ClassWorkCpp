#pragma once
#include <iostream>
using namespace std;
#include "Academy.h"
#include "Schedule.h"

class Sector : public Academy
{
	string adress;
	Schedule* schedule;
};

