#include "DieselEngine.h"

DieselEngine::DieselEngine()
{
	Standart = 1200;
}

void DieselEngine::EngineSpeed()
{
	cout << "���������� �������� ��������: " << Standart << endl;
}

void DieselEngine::EngineSpeed(int Turns)
{
	int Turns0 = Turns * 15;
	cout << "������� � ������ ������" << Turns0 << endl;
}
