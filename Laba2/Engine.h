#pragma once
class Engine
{
public:
	Engine(); //конструктор1
	Engine(bool IsRun); // перегрузка коструктора

	void Start();
	void End();

	void PressPedal();//перегрузка
	void PressPedal(int Force);
	

private: //приватные поля (доступ из класса(инкапсуляция))
	bool IsRunning;

	int FuelSupply();
	int FuelSupply(int supply);
};

