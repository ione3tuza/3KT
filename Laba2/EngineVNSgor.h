#pragma once
#include "Engine.h"

class EngineVNSgor : public Engine
{
public:
	EngineVNSgor(); //�����������1
	EngineVNSgor(bool isNotBroken); // ���������� �����������

	void AddFuel(int Litres);
	void Start();

protected:
	int Fuel;
};


