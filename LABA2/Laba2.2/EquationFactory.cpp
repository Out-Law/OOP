#include "EquationFactory.h"

Solution* EquationFactory::createEquation(char T, const std::vector<double>& params) {
	switch (T) {
	case 'L':
	{
		return new LinearEquation(params[0], params[1]);
	}
	case 'Q':
	{
		return new QuadraticEquation(params[0], params[1], params[2]);
	}
	default:
		throw std::exception("Incorrect equation type!");
	}
}
