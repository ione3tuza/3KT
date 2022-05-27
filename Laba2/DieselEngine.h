#pragma once
#include "EngineVNSgor.h"
#include <iostream>
using namespace std;

class DieselEngine : private EngineVNSgor
{
public:
	DieselEngine();

	void EngineSpeed();
	void EngineSpeed(int Turns);

private:
	int Standart;
};