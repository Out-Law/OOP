#include "Set.h"
#include <string>
#include <algorithm>

Set::Set(){}

Set::Set(int& power)
{
	_elements = new int[power];
	_power = power;
}

Set::~Set()
{
	delete[] _elements;
}

int Set::GetPower() const 
{
	return _power;
}

int Set::GetElements(int id) const
{
	return _elements[id];
}

void Set::CreateSet(int* setElements, int& power)
{
	_power = power;
	_elements = new int[power];
	std::copy(setElements, setElements + power, _elements);
	std::sort(_elements, _elements + _power);
}

void Set::AddSetElement(int& element)
{
	if (std::binary_search(_elements, _elements + _power, element)) {
		return;
	}

	int* tempElements = _elements;
	_elements = new int[_power+1];
	//memcpy(_element, tempElements, sizeof(int) * _power);
	std::copy(tempElements, tempElements + _power, _elements);
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
