#pragma once
#include "Set.h"

class Interface
{
public:
	Interface();
	~Interface();
private:
	Set* set = new Set[2];

	void CreatedTwoSet();
	void ChangeSet(int& numberSet); 
	void AddElement(int& numberSet);
	void CheckCommon() const;
	void GetPower(int& numberSet) const;
	void GetElements(int& numberSet) const;
	void printMenuText();
	int numberSet();
};

