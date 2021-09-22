#include "QuadraticEquation.h"

std::vector<double> QuadraticEquation::CalculateXResult()
{
	std::vector<double> result(2);
	result.push_back((-_b + sqrt(pow(_b, 2) - 4 * _a * _c)) / (2 * _a));
	result.push_back((-_b - sqrt(pow(_b, 2) - 4 * _a * _c)) / (2 * _a));

	return result;
}
