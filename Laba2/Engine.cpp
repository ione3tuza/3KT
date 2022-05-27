#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine()
{
	IsRunning = false;
}

Engine::Engine(bool IsRun)
{
	IsRunning = IsRun;
}

void Engine::Start()
{
	setlocale(LC_ALL, "ru");
	IsRunning = true;
	cout << "��������� �������" << endl;

}

void Engine::End()
{
	IsRunning = false;
	cout << "��������� ��������" << endl;
}

void Engine::PressPedal()
{
	cout << "������ ������" << endl;
	cout << "������� ��������" << endl;
}

void Engine::PressPedal(int Force)
{
	cout << "������ ������ � ����� " << Force << " ��������" << endl;
	int speedOfFuelSupply = 10 * Force;
	cout << "������� �������� �� ��������� " << FuelSupply(speedOfFuelSupply) << endl;
}

int Engine::FuelSupply()
{
	return 10;
}

int Engine::FuelSupply(int supply)
{
	return supply;
}

