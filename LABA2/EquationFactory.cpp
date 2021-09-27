#include "EquationFactory.h"

Solution* EquationFactory::createEquation(char T) {
	switch (T) {
	case 'L':
	{
		return new LinearEquation();
	}
	case 'K':
	{
		return new QuadraticEquation();
	}
	default:
		throw std::exception("Некорректный тип фигуры");
	}
}