#include "LinearEquation.h"

LinearEquation::LinearEquation(double a, double b)
	: Solution(std::vector<double>({a, b}))
{

}

std::vector<double> LinearEquation::CalculateXResult()
{
	return std::vector<double>(1, -GetRatio(0) / GetRatio(1));
}
