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
void Set::CreatedSet(int* setElements, int power)
{
	_power = power;
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

void Set::Unity(Set x, Set y)//функция для объединения множеств
{
	
}

void Set::Intersection(Set x, Set y)//Функция для пересечения множеств
{
	
}

bool Set::isIntersection(Set firstSet, Set SecondSet)//Функция для определения наличия пересечения
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