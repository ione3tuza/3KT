#pragma once
#include "Engine.h"

class EngineVNSgor : public Engine
{
public:
	EngineVNSgor(); //конструктор1
	EngineVNSgor(bool isNotBroken); // перегрузка коструктора

	void AddFuel(int Litres);
	void Start();

protected:
	int Fuel;
};


