#pragma once
#include <cmath>
#include <vector>
#include <iostream>
#include "Array.h"

using std::cout;

class Solution
{
public:
	Solution(const Array& ratio);

	virtual Array CalculateXResult() = 0;

	virtual  ~Solution();

protected:
	double GetRatio(int i) const;

private:
	Array _ratio;


};