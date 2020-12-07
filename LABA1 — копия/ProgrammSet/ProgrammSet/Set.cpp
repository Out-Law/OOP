#include "Set.h"
#include <string>

Set::Set(){} // Пустой конструктор

Set::Set(int& power)
{
	_elements = new int[power];
	_power = power;
}

Set::Set(int* setElements, int& power)
{
	_elements = new int[power];
	_power = power;

	for (int i = 0; i < _power; i++)
	{
		_elements[i] = setElements[i];
	}
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
int Set::GetElements(int count) const
{
	return _elements[count];
}

void Set::CreatedSet(int* setElements, int& power)
{
	_power = power;
	_elements = new int[power];
	for (int i = 0; i < _power; i++)
	{
		_elements[i] = setElements[i];
	}
}

void Set::AddSetElement(int& element)//Добовление элемента в множество
{
	int* tempElements = _elements;
	_elements = new int[_power+1];
	memcpy(_elements, tempElements, sizeof(int) * _power);
	delete[] tempElements;
	_elements[_power] = element;
	_power++;
}

bool Set::CheckSetCommon(Set& set)
{
	for (int i = 0; i < _power; i++)
	{
		for (int j = 0; j < set._power; j++)
		{
			if (_elements[i] == set._elements[j])
			{
				return true;
			}
		}
	}
	return false;
}
