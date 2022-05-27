#pragma once
class Engine
{
public:
	Engine(); //конструктор1
	Engine(bool isNotBroken); // перегрузка коструктора

	virtual void Start();
	virtual void End();
	void FixEngine();

protected:
	bool IsRunning, workingCorrectly;
	virtual bool CheckEngine();
};

