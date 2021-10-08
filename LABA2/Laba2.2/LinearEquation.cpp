#include "LinearEquation.h"

LinearEquation::LinearEquation(double a, double b)
	: Solution({a, b})
{
		
}

Array LinearEquation::CalculateXResult()
{
	return Array({ -GetRatio(0) / GetRatio(1) });
	return 0;
}
