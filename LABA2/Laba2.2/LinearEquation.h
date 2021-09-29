#pragma once
#include "Solution.h"

class LinearEquation : public Solution {
public:
	LinearEquation(double a, double b);
	
	virtual std::vector<double> CalculateXResult() override;
};