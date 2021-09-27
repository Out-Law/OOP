#pragma once
#include "Solution.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"

class EquationFactory {
public:
	Solution* createEquation(char T);
};