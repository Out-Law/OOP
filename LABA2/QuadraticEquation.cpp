#include "QuadraticEquation.h"
#include <stdexcept>

QuadraticEquation::QuadraticEquation(double a, double b, double c)
	: Solution(std::vector<double>({ a, b, c }))
{

}

void QuadraticEquation::CheckDisscriminant()
{
	if ((pow(GetRatio(0), 2) - (4 * GetRatio(1) * GetRatio(2))) < 0)
	{
		throw std::logic_error("Discriminant < 0");
	}
}

std::vector<double> QuadraticEquation::CalculateXResult()
{
	CheckDisscriminant();

	std::vector<double> result(0);
	result.push_back((-GetRatio(0) + sqrt(pow(GetRatio(0), 2) - 
		4 * GetRatio(1) * GetRatio(2))) / (2 * GetRatio(1)));
	result.push_back((-GetRatio(0) - sqrt(pow(GetRatio(0), 2) 
		- 4 * GetRatio(1) * GetRatio(2))) / (2 * GetRatio(1)));

	return result;
}
