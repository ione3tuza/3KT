#include "JetEngine.h"

JetEngine::JetEngine()
{
	Fuel = 0;
}

void JetEngine::Start()
{
	if (CheckEngine() && Fuel > 0)
	{
		IsRunning = true;
		cout << "реактивный двигательзапущен" << endl;
	}
	else if (!CheckEngine())
		cout << "реактивный двигатель сломан" << endl;
	else if (Fuel <= 0)
		cout << "реактивный двигатель не заправлен" << endl;
}

void JetEngine::refuel(int Liters)
{
	Fuel += Liters;
	cout << "Заправлено реактивного топлива - " << Liters << " литров"<< endl;
}

void JetEngine::ShowFuel()
{
	cout << "Количество реактивного топлива - " << Fuel<< " литров"<<endl;
}
