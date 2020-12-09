#include "Set.h"
#include <string>
#include <algorithm>

Set::Set(){} // Пустой конструктор

Set::Set(int& power)
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
int Set::GetElements(int count) const
{
	return _elements[count];
}

void Set::CreatedSet(int* setElements, int& power)
{
	_power = power;
	_elements = new int[power];
	std::copy(setElements, setElements + power, _elements);
}

void Set::AddSetElement(int& element)//Добовление элемента в множество
{
	if (std::binary_search(_elements, _elements + _power, element)) {
		return;
	}

	int* tempElements = _elements;
	_elements = new int[_power+1];
	memcpy(_elements, tempElements, sizeof(int) * _power);
	delete[] tempElements;
	_elements[_power] = element;
	_power++;

	std::sort(_elements, _elements + _power);
}

bool Set::CheckSetCommon(Set& set) const
{
	for (int i = 0; i < set._power; ++i) {
		if (std::binary_search(_elements, _elements + _power, set._elements[i])) {
			return true;
		}
	}
	return false;
}
