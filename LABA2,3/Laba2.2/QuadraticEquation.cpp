#include "QuadraticEquation.h"
#include <stdexcept>

QuadraticEquation::QuadraticEquation(double a, double b, double c)
	: Solution({a, b, c})
{

}

void QuadraticEquation::CheckDisscriminant()
{
	if ((pow(GetRatio(0), 2) - (4 * GetRatio(1) * GetRatio(2))) < 0)
	{
		throw std::logic_error("Discriminant < 0");
	}
}

Array QuadraticEquation::CalculateXResult()
{
	CheckDisscriminant();

	double x1 = (-GetRatio(1) + sqrt(pow(GetRatio(1), 2) -
		4 * GetRatio(0) * GetRatio(2))) / (2 * GetRatio(0));

	double x2 = (-GetRatio(1) - sqrt(pow(GetRatio(1), 2) -
		4 * GetRatio(0) * GetRatio(2))) / (2 * GetRatio(0));

	return Array({x1, x2});
}
