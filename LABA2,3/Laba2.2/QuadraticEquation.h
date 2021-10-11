#pragma once
#include "Solution.h"

class QuadraticEquation :public Solution {
public:
	QuadraticEquation(double a, double b, double c);

	virtual Array CalculateXResult() override;



private:
	void CheckDisscriminant();
};
