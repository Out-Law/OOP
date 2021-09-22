#pragma once
#include "Solution.h"

class LinearEquation : public Solution {
public:
	LinearEquation(double a, double b, double c):Solution(a, b, c) {};

	virtual std::vector<double> CalculateXResult() override;
};