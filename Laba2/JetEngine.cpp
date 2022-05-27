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
		cout << "���������� ����������������" << endl;
	}
	else if (!CheckEngine())
		cout << "���������� ��������� ������" << endl;
	else if (Fuel <= 0)
		cout << "���������� ��������� �� ���������" << endl;
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
