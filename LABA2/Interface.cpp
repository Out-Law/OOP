#pragma once
#include "Interface.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


Interface::~Interface()
{
	if (linearEquation)
	{
		delete linearEquation;
	}

	if (quadraticEquation)
	{
		delete quadraticEquation;
	}
}

Interface::~Interface()
{
	for (int i = 0; i < _count; ++i) {
		if (_equation[i] != nullptr) {
			delete _equation[i];
		}
	}
	delete[] _equation;
}

void Interface::Go()
{
	try {
		dialogEquationCount();
		createEmptyArr();
		createEquation();
		dialog();
	}
	catch (const std::exception& exept) {
		std::cout << exept.what() << std::endl;
	}	
}

void Interface::dialogEquationCount() 
{
	do {
		std::cout << "How many equations will there be?: ";
		std::cin >> _count;
	} while (_count <= 0);
}

void Interface::createEmptyArr()
{
	_equation = new Solution * [_count];
	for (int i = 0; i < _count; ++i) {
		_equation[i] = nullptr;
	}
}

void Interface::createEquation() 
{
	try {
		char T;
		double a, b, c;

		for (int i = 0; i < _count; ++i) {
			std::cout << "\n---Уравнение #" << i + 1 << "---" << std::endl;

		
			std::cout << "Какое уравнение создать? | (L) - линейное, (K) - квадратное" << std::endl;
			std::cin >> T;

			if (T == 'L')
			{
				cout << "Enter coefficients a, b (a * x - b)" << endl;
				cin >> a >> b;
			}
			else
			{
				cout << "Enter coefficients a, b, c (a * x - b * x + c + 0)" << endl;
				cin >> a >> b;
			}

			_equation[i] = EquationFactory().createEquation(T);

			int count = _equation[i]->getNumberOfEdges();
		}
	}
	catch (const std::exception& exept) {
		throw std::exception(exept.what());
	}
}

void Interface::dialog()
{
	double a, b, c;
	bool running = true;

	while (running)
	{
		printMenuText();
		int input;
		cin >> input;

		switch (input) {
		case 0: {
			running = false;
			cout << "GoodBuy\n";
			break;
		}
		case 1: {
			cout << "Enter coefficients a, b (a * x - b)" << endl;
			cin >> a >> b;
			linearEquation = new LinearEquation(a, b);
			auto result = linearEquation->CalculateXResult();
			for (double i : result)
			{
				cout << i << endl;
			}
			break;
		}
		case 2: {
			cout << "Enter coefficients a, b, c (a * x - b * x + c + 0)" << endl;
			try
			{
				cin >> a >> b >> c;
				quadraticEquation = new QuadraticEquation(a, b, c);
				auto result = quadraticEquation->CalculateXResult();
				for (double i : result)
				{
					cout << i << endl;
				}
				break;

			}

			catch (const std::logic_error& error)
			{
				cout << error.what() << endl;
				break;
			}
		}
		case 3: {
			printMenuText();
			break;
		}
		default: {
			running = false;
			break;
		}
		}

	}
}

int Interface::figureID() const {
	int figure_id;
	do {
		std::cout << "Введите ID уравнения: " << std::endl;
		std::cin >> figure_id;
	} while (figure_id < 1 || figure_id > _count);

	return figure_id - 1;
}


void Interface::printMenuText() {
	std::cout << "\n-----------------------------" << std::endl;
	std::cout << "1 - Найти площадь" << std::endl;
	std::cout << "2 - Найти центр тяжести" << std::endl;
	std::cout << "3 - Повернуть фигуру" << std::endl;
	std::cout << "4 - Переместить фигуру" << std::endl;
	std::cout << "5 - Сравнить две фигуры (по площади)" << std::endl;
	std::cout << "6 - Пересечение фигур" << std::endl;
	std::cout << "7 - Включение одной фигуры в другую" << std::endl;
	std::cout << "0 - Выход" << std::endl;
	std::cout << "-----------------------------" << std::endl;
}