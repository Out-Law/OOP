#pragma once
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include "EquationFactory.h"

class Interface
{
public:
	void Go();
	~Interface();
private:
	void printMenuText();
	void dialog();
	void dialogEquationCount();
	void createEmptyArr();
	void createEquation();
	int figureID() const;

	Solution* linearEquation = nullptr;
	Solution* quadraticEquation = nullptr;

	int _count = 0;
	Solution** _equation = nullptr;
};