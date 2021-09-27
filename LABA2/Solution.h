#pragma once
#include <cmath>
#include <vector>

class Solution
{
public:
	Solution(const std::vector<double>& ratioVector);

	virtual std::vector<double> CalculateXResult() = 0;

	virtual  ~Solution() = default;

protected:
	double GetRatio(int i) const;

private:
	std::vector<double> _ratio;


};