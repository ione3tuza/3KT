#pragma once
#include "Engine.h"

class EngineVNSgor : public Engine
{
public:
	EngineVNSgor(); //конструктор1
	EngineVNSgor(bool InCor); // перегрузка коструктора

	void CheckCor0();
	void CheckCor1();


private: //приватные поля (доступ из класса(инкапсуляция))
	bool InCorrect;
};


