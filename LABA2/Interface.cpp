#pragma once
#include "Interface.h"
#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include <iostream>

using std::cin;
using std::cout;


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
	printMenuText();

	while (running)
	{
		int input;
		cin >> input;

		switch (input) {
				printMenuText();
			case 0: {
				running = false;
				cout << "GoodBuy\n";
				break;
			}
			case 1: {
				std::cout << "Enter coefficients a, b" << std::endl;
				std::cin >> a >> b;
				linearEquation = new LinearEquation(a, b, 0);
				auto result = linearEquation->CalculateXResult();
				for (double i : result)
				{
					std::cout << i << std::endl;
				}
				break;
			}
			case 2: {
				std::cout << "Enter coefficients a, b, c" << std::endl;
				try
				{
					std::cin >> a >> b >> c;
					if ((pow(b, 2) - (4 * a * c)) < 0)
					{
						throw std::logic_error("Discriminant < 0");
					}

				}

				catch (const std::logic_error& error)
				{
					std::cout << error.what() << std::endl;
					break;
				}

				quadraticEquation = new QuadraticEquation(a, b, c);
				auto result = quadraticEquation->CalculateXResult();
				for (double i : result)
				{
					std::cout << i << std::endl;
				}
				break;
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