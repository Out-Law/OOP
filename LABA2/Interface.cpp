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

void Interface::printMenuText()
{
	cout << "\n1 - Solve a linear equation.\n2 - Solve the quadratic equation.\n"
		"3 - Help.\nAny other value - Exit.\n"
		"===================================================================================\n";
}

void Interface::Go()
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
				linearEquation = new LinearEquation(a, b, 0);
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