#include "EngineVNSgor.h"

#include <iostream>
using namespace std;

EngineVNSgor::EngineVNSgor()
{
	IsRunning = false;
	workingCorrectly = true;
	Fuel = 0;
}

EngineVNSgor::EngineVNSgor(bool isNotBroken)
{
	IsRunning = false;
	workingCorrectly = isNotBroken;
	Fuel = 0;
}

void EngineVNSgor::AddFuel(int Litres)
{
	Fuel += Litres;
}

void EngineVNSgor::Start()
{
	if (CheckEngine() && Fuel > 0)
	{
		IsRunning = true;
		cout << "Двигатель внутреннего сгорания запущен" << endl;
	}
	else if (!CheckEngine())
		cout << "Двигатель внутреннего сгорания сломан" << endl;
	else if (Fuel <= 0)
		cout << "Двигатель внутреннего сгорания не заправлен" << endl;
}