#include "LinearEquation.h"

LinearEquation::LinearEquation(double a, double b)
	: Solution(new double[2]{a, b}, 2)
{
		
}

int *LinearEquation::CalculateXResult()
{
	//return std::vector<double>(1, -GetRatio(0) / GetRatio(1));
	return 0;
}
