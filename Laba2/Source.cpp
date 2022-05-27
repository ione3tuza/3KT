#include <iostream>
#include "Engine.h"
#include "JetEngine.h"
#include "EngineVNSgor.h"
#include "DieselEngine.h"
using namespace std;

int main()
{
	Engine engine;
	Engine engine2(true);

	engine = false;
	engine.Start();

	engine.End();

	engine.PressPedal();

	engine.PressPedal(30);
	engine.PressPedal(15);
	cout << endl;
	
	JetEngine jet;
	jet.refuel(2);
	jet.ShowFuel();
	cout << endl;

	EngineVNSgor vnsgor;

	vnsgor = true;

	vnsgor.CheckCor0();
	vnsgor.CheckCor1();
	cout << endl;

	DieselEngine DiesEng;

	DiesEng.EngineSpeed();
	DiesEng.EngineSpeed(50);
}