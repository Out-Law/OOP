#pragma once
#include "LinearEquation.h"
#include "QuadraticEquation.h"

class Interface
{
public:
	void Go();
	~Interface();
private:
	void printMenuText();

	Solution* linearEquation = nullptr;
	Solution* quadraticEquation = nullptr;
};