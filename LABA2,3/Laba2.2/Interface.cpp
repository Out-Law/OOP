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
		cout << exept.what() << endl;
	}	
}

void Interface::dialogEquationCount() 
{
	do {
		cout << "How many equations will there be?: ";
		cin >> _count;
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
	char T;
	std::vector<double> params(3);

	for (int i = 0; i < _count; ++i) {
		cout << "\n---Equation #" << i + 1 << "---" << endl;


		cout << "What equation to create? | (L) - linear equation, (Q) - quadratic equation" << std::endl;
		cin >> T;

		if (T == 'L')
		{
			cout << "Enter coefficients a, b (a * x - b)" << endl;
			cin >> params[0] >> params[1];
		}
		if (T == 'Q')
		{
			cout << "Enter coefficients a, b, c (a * x - b * x + c + 0)" << endl;
			cin >> params[0] >> params[1] >> params[2];
		}
		_equation[i] = EquationFactory().createEquation(T, params);
	}
}

void Interface::dialog()
{
	bool running = true;

	while (running)
	{
		printMenuText();
		int input;
		cin >> input;

		try
		{

			switch (input)
			{
				case 0:
				{
					running = false;
					cout << "GoodBuy\n";

				}
				break;
				case 1:
				{
					auto result = _equation[figureID()]->CalculateXResult();
					for (int i = 0 ; i < result.Size(); i++)
					{
						cout << result[i] << endl;
					}
				}
				break;
				default:
				{
					running = false;
				}
				break;
			}
		}
		catch (const std::logic_error& error)
		{
			cout << error.what() << endl;
		}
	}
}

int Interface::figureID() const
{
	int figure_id;
	do {
		cout << "Enter Equation ID: " << endl;
		cin >> figure_id;
	} while (figure_id < 1 || figure_id > _count);

	return figure_id - 1;
}


void Interface::printMenuText()
{
	cout << "\n-----------------------------" << endl;
	cout << "1 - Print the answer to the equation by ID" << endl;
	cout << "0 - Exit" << endl;
	cout << "-----------------------------" << endl;
}