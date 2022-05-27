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
		cout << "��������� �������" << endl;
	}
	else
		cout << "��������� ������" << endl;
}

void Engine::End()
{
	IsRunning = false;
	cout << "��������� ��������" << endl;
}

void Engine::FixEngine()
{
	workingCorrectly = true;
	cout << "��������� �������" << endl;
}

bool Engine::CheckEngine()
{
	return workingCorrectly;
}