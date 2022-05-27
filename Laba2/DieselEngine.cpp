#include "DieselEngine.h"

DieselEngine::DieselEngine()
{
	Standart = 1200;
}

void DieselEngine::EngineSpeed()
{
	cout << "Количество холостых оборотов: " << Standart << endl;
}

void DieselEngine::EngineSpeed(int Turns)
{
	int Turns0 = Turns * 15;
	cout << "Обороты в данный момент" << Turns0 << endl;
}
