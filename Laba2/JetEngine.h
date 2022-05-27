#pragma once
#include "Engine.h"
#include <iostream>
using namespace std;

class JetEngine : public Engine 
{
public:
	JetEngine();
	void Start();
	void refuel(int Liters);
	void ShowFuel();
private:
	int Fuel;
};

