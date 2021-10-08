#pragma once
#include "Solution.h"

using std::cout;

class LinearEquation : public Solution {
public:
	LinearEquation(double a, double b);
	
	virtual int *CalculateXResult() override;
};