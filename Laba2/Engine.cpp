#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine()
{
	IsRunning = false;
	workingCorrectly = true;
}

Engine::Engine(bool isNotBroken)
{
	IsRunning = false;
	workingCorrectly = isNotBroken;
}

void Engine::Start()
{
	if (CheckEngine())
	{
		IsRunning = true;
		cout << "Двигатель запущен" << endl;
	}
	else
		cout << "Двигатель сломан" << endl;
}

void Engine::End()
{
	IsRunning = false;
	cout << "Двигатель заглушен" << endl;
}

void Engine::FixEngine()
{
	workingCorrectly = true;
	cout << "Двигатель починен" << endl;
}

bool Engine::CheckEngine()
{
	return workingCorrectly;
}