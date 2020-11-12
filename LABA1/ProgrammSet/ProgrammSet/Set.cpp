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
void Set::CreatedSet(int* setElements, int power)
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

void Set::Unity(Set x, Set y)//������� ��� ����������� ��������
{
	
}

void Set::Intersection(Set x, Set y)//������� ��� ����������� ��������
{
	
}

bool Set::isIntersection(Set firstSet, Set SecondSet)//������� ��� ����������� ������� �����������
{
	for (int i = 1; i <= firstSet._power; i++)
	{
		for (int j = 1; j <= SecondSet._power; j++)
		{
			if (firstSet._elements[i] == SecondSet._elements[j])
			{
				return 1;
			}
		}
	}

	return 0;
}