#include "JetEngine.h"



JetEngine::JetEngine()
{
	Fuel = 0;
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
