#include "JetEngine.h"



JetEngine::JetEngine()
{
	Fuel = 0;
}

void JetEngine::refuel(int Liters)
{
	Fuel += Liters;
	cout << "���������� ����������� ������� - " << Liters << " ������"<< endl;
}

void JetEngine::ShowFuel()
{
	cout << "���������� ����������� ������� - " << Fuel<< " ������"<<endl;
}
