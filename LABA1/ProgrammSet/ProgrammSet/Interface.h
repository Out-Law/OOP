#pragma once
#include "Set.h"

class Interface
{
public:
	Interface();
	void printMenuText();
private:
	Set set[2];

	void CreatedTwoSet();//�������� ���� ��������
	void ChangeSet(int numberSet); //�������� ���� �� ��������
	void AddElement(int numberSet);//���������� ��������
	void GetPower();
	void GetElements();
	void UnitySet();//�����������
	void IntersectionSet();//�����������

};

