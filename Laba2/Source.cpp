#include <iostream>
#include "Engine.h"
#include "JetEngine.h"
#include "EngineVNSgor.h"
#include "DieselEngine.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	Engine eng;

	eng.Start();
	eng.End();
	cout << endl;

	Engine eng2(false);//сломанный двигатель
	eng2.Start();
	eng2.FixEngine();
	eng2.Start();

	cout << endl;
	EngineVNSgor engVN;
	engVN.Start();
	engVN.AddFuel(5);
	engVN.Start();
	engVN.End();

	cout << endl;
	DieselEngine dis;
	dis.Start();
	dis.AddFuel(10);
	dis.Start();
	dis.End();

	cout << endl;
	JetEngine jet;
	jet.Start();
	jet.refuel(5);
	jet.refuel(20);
	jet.ShowFuel();
	jet.End();
}