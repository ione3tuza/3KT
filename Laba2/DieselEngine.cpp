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
		cout << "��������� ��������� �������" << endl;
	}
	else if (!CheckEngine())
		cout << "��������� ��������� ������" << endl;
	else if (Fuel <= 0)
		cout << "��������� ��������� �� ���������" << endl;
}