#include "Interface.h"
#include "Set.h"
#include <iostream>

using namespace std;

void Interface::ChangeSet(int numberSet)
{
	int power;

	cout << "¬ведите мщность дл€ множества: ";
	cin >> power;
	int* setElement = new int[power];

	for (int i = 0; i < power; i++)
	{
		cin >> setElement[i];
	}

	set[numberSet].CreatedSet(setElement, power);

	delete[] setElement;
	cout << endl;
}


void Interface::CreatedTwoSet()
{
	for (int i = 0; i < 2; i++)
	{
		ChangeSet(i);
	}

}

void Interface::AddElement(int numberSet)
{
	int element;
	cin >> element;
	set[numberSet].AddSetElement(element);
}

void Interface::UnitySet()
{

}

Interface::Interface()
{
	bool running = true;
	CreatedTwoSet();

	try
	{
		printMenuText();
		while (running)
		{
			int input;
			cin >> input;
			switch (input) {
			case 0: {
				running = false;
				cout << "GoodBuy" << endl;
				break;
			}
			case 1: {
				cout << "¬ведите числом какое множество вы хотите изменить: ";
				int numberSet;
				cin >> numberSet;
				cout << endl;
				ChangeSet(numberSet);
				break;
			}
			case 2: {
				CreatedTwoSet();
				break;
			}
			case 3: {
				cout << "¬ведите числом в какое множество вы хотите добавить элемент: ";
				int numberSet;
				cin >> numberSet;
				cout << endl;
				AddElement(numberSet);
				break;
			}
			case 4: {

				break;
			}
			case 5: {

				break;
			}
			case 6: {

				printMenuText();
				break;
			}
			}
		}
	}
	catch (int)
	{
		cout << "ќшибка" << endl;
	}
}

void Interface::printMenuText() {
	cout << "\n¬ведите 1, чтобы изменить одно из множеств.\n¬ведите 2, чтобы изменить оба множества.\n"
		"¬ведите 3, чтобы добаувить в множество новый элемент.\n¬ведите 4, чтобы объединить множества\n"
		"===================================================================================" << endl;
}