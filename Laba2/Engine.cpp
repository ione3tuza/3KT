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
	cout << "Двигатель запущен" << endl;

}

void Engine::End()
{
	IsRunning = false;
	cout << "Двигатель заглушен" << endl;
}

void Engine::PressPedal()
{
	cout << "Педаль нажата" << endl;
	cout << "Топливо подается" << endl;
}

void Engine::PressPedal(int Force)
{
	cout << "Педаль нажата с силой " << Force << " ньютонов" << endl;
	int speedOfFuelSupply = 10 * Force;
	cout << "Топливо подается со скоростью " << FuelSupply(speedOfFuelSupply) << endl;
}

int Engine::FuelSupply()
{
	return 10;
}

int Engine::FuelSupply(int supply)
{
	return supply;
}

