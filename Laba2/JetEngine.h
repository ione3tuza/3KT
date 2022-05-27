#pragma once
#include "Engine.h"
#include <iostream>
using namespace std;

class JetEngine : private Engine 
{
public:
	JetEngine();
	void refuel(int Liters);
	void ShowFuel();
private:
	int Fuel;
};

