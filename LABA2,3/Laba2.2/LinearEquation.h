#pragma once
#include "Solution.h"

using std::cout;

class LinearEquation : public Solution {
public:
	LinearEquation(double a, double b);
	
	virtual Array CalculateXResult() override;
};