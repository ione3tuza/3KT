#pragma once
#include "EngineVNSgor.h"
#include <iostream>
using namespace std;

class DieselEngine : public EngineVNSgor
{
public:
	DieselEngine();
	void Start();
};