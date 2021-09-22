#pragma once
#include "Solution.h"

class QuadraticEquation :public Solution {
public:
	QuadraticEquation(double a, double b, double c) :Solution(a, b, c){}

	virtual std::vector<double> CalculateXResult() override;
};
