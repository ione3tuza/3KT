#pragma once
class Engine
{
public:
	Engine(); //�����������1
	Engine(bool IsRun); // ���������� �����������

	void Start();
	void End();

	void PressPedal();//����������
	void PressPedal(int Force);
	

private: //��������� ���� (������ �� ������(������������))
	bool IsRunning;

	int FuelSupply();
	int FuelSupply(int supply);
};

