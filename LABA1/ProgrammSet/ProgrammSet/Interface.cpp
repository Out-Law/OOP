#include "Interface.h"
#include "Set.h"
#include <iostream>

using std::cin;
using std::cout;

void Interface::ChangeSet(int& numberSet)
{
	int power;
	cout << "Enter the power for the set: ";
	cin >> power;

	while (power<0)
	{
		cout << "Error: enter a non-negative number:\n";
		cin >> power;
	}
	cout << "Enter " << power << " numbers separated by a space: ";
	int* setElement = new int[power];

	for (int i = 0; i < power; i++)
	{
		cin >> setElement[i];
	}

	set[numberSet].CreateSet(setElement, power);
	delete[] setElement;
	cout << '\n';
	
}

Interface::~Interface()
{
	delete[] set;
}

void Interface::CreatedTwoSet()
{
	for (int i = 0; i < 2; i++)
	{
		ChangeSet(i);
	}

}

void Interface::AddElement(int& numberSet)
{
	cout << "Enter an item: ";
	int element;
	cin >> element;
	set[numberSet].AddSetElement(element);
}

void Interface::CheckCommon() const
{
	if (set[0].CheckSetCommon(set[1]))
	{
		cout << "Sets have common elements\n";
	}
	else
	{
		cout << "Sets haven't common elements\n";
	}
}

void Interface::GetPower(int& numberSet) const
{
	cout << set[numberSet].GetPower() << '\n';;
}

void Interface::GetElements(int& numberSet) const
{
	for (int i = 0; i < set[numberSet].GetPower(); i++)
	{
		cout << set[numberSet].GetElements(i)<< ' ';
	}
	cout << '\n';
}

int Interface::numberSet()
{
	bool flag = true;
	int number;

	while (flag) {
		cout << "Select the set to make changes to: 1 or 2\n";
		cin >> number;
		if (number <= 0 || number >= 3)
		{
			cout << "Error: Wrong number entered. Try again!\n";
		}
		else
		{
			flag = false;
		}
	}
	cout << '\n';
	return number - 1;
}

void Interface::printMenuText()
{
	cout << "\n1 - Change one set.\n2 - Change both sets.\n"
		"3 - Add a new element to the set.\n4 - Check whether there are common elements\n"
		"5 - Find out The power from the set.\n6 - Find out which elements the set contains\n"
		"7 - Help.\nAny other value - Exit.\n"
		"===================================================================================\n";
}

void Interface::Go()
{
	bool running = true;
	CreatedTwoSet();
	printMenuText();

	while (running)
	{
		try
		{
			int input, number;
			cin >> input;

			switch (input) {
					printMenuText();
				case 0: {
					running = false;
					cout << "GoodBuy\n";
					break;
				}
				case 1: {
					number = numberSet();
					ChangeSet(number);
					break;
				}
				case 2: {
					CreatedTwoSet();
					break;
				}
				case 3: {
					number = numberSet();
					AddElement(number);
					break;
				}
				case 4: {
					CheckCommon();
					break;
				}
				case 5: {
					number = numberSet();
					GetPower(number);
					break;
				}
				case 6: {
					number = numberSet();
					GetElements(number);
					break;
				}
				case 7: {
					printMenuText();
					break;
				}
				default: {
					running = false;
					break;
				}
			}
		}
		catch (int err)
		{
			cout << "Error" << err << '\n';
		}
	}
}
