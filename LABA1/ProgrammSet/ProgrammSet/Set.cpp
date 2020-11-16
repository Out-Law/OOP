#include "Set.h"
#include <iostream>
#include <string>
using namespace std;

Set::Set(){} // Пустой конструктор

Set::Set(int power)
{
	_elements = new int[power];
	_power = power;
}

Set::~Set()//Деструктор удаляющий объект класса
{
	delete[] _elements;
}

int Set::GetPower() const
{
	return _power;
}

//проверить выведит один или несколько элементов
int Set::GetElements() const
{
	for (int i = 0; i < _power; i++)
	{
		return _elements[i];
	}
}

//создать перегрзку для метода
void Set::CreatedSet(int * setElements, int power)
{
	//delete[] _elements;
	_power = power;
	_elements = new int[power];
	for (int i = 0; i < _power; i++)
	{
		_elements[i] = setElements[i];
	}
}

void Set::AddSetElement(int element)//Добовление элемента в множество
{
	int* tempElements = _elements;
	_elements = new int[_power+1];
	memcpy(_elements, tempElements, sizeof(int) * _power);
	delete[] tempElements;
	_elements[_power] = element;
}

bool Set::CheckSetCommon(Set set)
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

/*void Set::Unity(Set firstSet, Set secondSet, bool flagOne)//функция для объединения множеств
{
	bool flag = firstSet.CheckCommon(secondSet);
	if (flag == true) 
	{
		for (int i = 0; i < firstSet._power; i++)
		{
			_elements[i] = firstSet._elements[i];
		}
		for (int i = firstSet._power; i < _power; i++)
		{
			_elements[i] = secondSet._elements[i- firstSet._power];
		}
		flagOne = true;
	}
}

void Set::Intersection(Set firstSet, Set secondSet)//Функция для пересечения множеств
{
	Set set;
	bool flag = firstSet.CheckCommon(secondSet);
	if (flag == true)
	{
		
	}
	else
	{

	}
}*/
