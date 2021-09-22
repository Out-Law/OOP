#pragma once
#include <cmath>
#include <vector>

class Solution
{
public:
	Solution(double a, double b, double c);

	virtual std::vector<double> CalculateXResult() = 0;

	virtual ~Solution() = default;

protected:
	double _a;
	double _b;
	double _c;
};