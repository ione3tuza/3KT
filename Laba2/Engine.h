#pragma once
class Engine
{
public:
	Engine(); //�����������1
	Engine(bool isNotBroken); // ���������� �����������

	virtual void Start();
	virtual void End();
	void FixEngine();

protected:
	bool IsRunning, workingCorrectly;
	virtual bool CheckEngine();
};

