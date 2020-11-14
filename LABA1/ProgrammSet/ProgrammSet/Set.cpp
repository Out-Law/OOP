#include "Set.h"
#include <iostream>
#include <string>
using namespace std;

Set::Set(){} // ������ �����������

Set::Set(int power)
{
	_elements = new int[power];
	_power = power;
}

Set::~Set()//���������� ��������� ������ ������
{
	delete[] _elements;
}

int Set::GetPower() const
{
	return _power;
}

//��������� ������� ���� ��� ��������� ���������
int Set::GetElements() const
{
	for (int i = 0; i < _power; i++)
	{
		return _elements[i];
	}
}

//������� ��������� ��� ������
void Set::CreatedSet(int * setElements, int power)
{
	_power = power;
	for (int i = 0; i < _power; i++)
	{
		_elements[i] = setElements[i];
	}
}

void Set::AddSetElement(int element)//���������� �������� � ���������
{
	int* tempElements = _elements;
	_elements = new int[_power+1];
	memcpy(_elements, tempElements, sizeof(int) * _power);
	delete[] tempElements;
	_elements[_power] = element;
}

bool  Set::CheckCommon(Set set)
{
	for (int i = 0; i < _power; i++)
	{
		for (int j = 0; j < set._power; j++)
		{
			if (_elements[i] == set._elements[i])
			{
				return true;
			}
		}
	}
	return false;
}

void Set::Unity(Set firstSet, Set secondSet)//������� ��� ����������� ��������
{
	bool flag = firstSet.CheckCommon(secondSet);
	if (flag == true) 
	{
		_power = firstSet._power + secondSet._power;
		_elements = new int[firstSet._power + secondSet._power];
		memcpy(_elements, firstSet._elements, sizeof(int) * firstSet._power);
		for (int i = firstSet._power; i < secondSet._power; i++)
		{
			_elements[i] = secondSet._elements[i - firstSet._power];
		}
	}
	else
	{

	}
}

void Set::Intersection(Set firstSet, Set secondSet)//������� ��� ����������� ��������
{
	bool flag = firstSet.CheckCommon(secondSet);
	if (flag == true)
	{
		_power = firstSet._power + secondSet._power;
		_elements = new int[firstSet._power + secondSet._power];
		memcpy(_elements, firstSet._elements, sizeof(int) * firstSet._power);
		for (int i = firstSet._power; i < secondSet._power; i++)
		{
			_elements[i] = secondSet._elements[i - firstSet._power];
		}
	}
	else
	{

	}
}
