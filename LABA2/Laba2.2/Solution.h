#pragma once
#include <cmath>
#include <vector>
#include <iostream>
#include <Array>

using std::cout;

class Solution
{
public:
	Solution(double* ratio, int power);

	virtual int *CalculateXResult() = 0;

	virtual  ~Solution();

protected:
	double GetRatio(int i) const;

private:
	//std::vector<double> _ratio;
	Array* _ratio = nullptr;


};