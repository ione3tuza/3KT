#pragma once
#include "Engine.h"

class EngineVNSgor : public Engine
{
public:
	EngineVNSgor(); //�����������1
	EngineVNSgor(bool InCor); // ���������� �����������

	void CheckCor0();
	void CheckCor1();


private: //��������� ���� (������ �� ������(������������))
	bool InCorrect;
};


