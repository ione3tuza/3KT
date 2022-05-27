#include "DieselEngine.h"

DieselEngine::DieselEngine()
{
	IsRunning = false;
	workingCorrectly = true;
	Fuel = 0;
}

void DieselEngine::Start()
{
	if (CheckEngine() && Fuel > 0)
	{
		IsRunning = true;
		cout << "Дизельный двигатель запущен" << endl;
	}
	else if (!CheckEngine())
		cout << "Дизельный двигатель сломан" << endl;
	else if (Fuel <= 0)
		cout << "Дизельный двигатель не заправлен" << endl;
}