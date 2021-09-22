#include "QuadraticEquation.h"
#include <stdexcept>

void QuadraticEquation::CheckDisscriminant()
{
	if ((pow(_b, 2) - (4 * _a * _c)) < 0)
	{
		throw std::logic_error("Discriminant < 0");
	}
}

std::vector<double> QuadraticEquation::CalculateXResult()
{
	CheckDisscriminant();

	std::vector<double> result(0);
	result.push_back((-_b + sqrt(pow(_b, 2) - 4 * _a * _c)) / (2 * _a));
	result.push_back((-_b - sqrt(pow(_b, 2) - 4 * _a * _c)) / (2 * _a));

	return result;
}
