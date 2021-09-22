#include "LinearEquation.h"

std::vector<double> LinearEquation::CalculateXResult()
{
	return std::vector<double>(1, -_b / _a);
}
