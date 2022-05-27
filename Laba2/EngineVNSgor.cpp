#include "EngineVNSgor.h"

#include <iostream>
using namespace std;

EngineVNSgor::EngineVNSgor()
{
	InCorrect = false;
}

EngineVNSgor::EngineVNSgor(bool InCor)
{
	InCorrect = InCor;
}

void EngineVNSgor::CheckCor0()
{
	setlocale(LC_ALL, "ru");
	InCorrect = true;
	cout << "Ошибок нет" << endl;

}

void EngineVNSgor::CheckCor1()
{
	InCorrect = false;
	cout << "Ошибки есть, посетите ближайшую станцию ТО" << endl;
}
