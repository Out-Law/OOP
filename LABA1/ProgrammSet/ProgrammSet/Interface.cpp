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

	cout << "¬ведите "<< power <<" чисел через пробел: ";

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
	cout << "¬ведите элемент: ";
	int element;
	cin >> element;
	set[numberSet].AddSetElement(element);
}

void Interface::CheckCommon()
{

}

void Interface::GetPower(int numberSet)
{

}

void Interface::GetElements(int numberSet)
{

}

/*void Interface::UnitySet()
{
	int firstSetPower = set[0].GetPower(), secondSetPower = set[1].GetPower();

	int* setElement = new int[firstSetPower + secondSetPower];

	for (int i = 0; i < firstSetPower + secondSetPower; i++)
	{
		setElement[i] = 0;
	}

	Set tempSet;
	tempSet.CreatedSet(setElement, firstSetPower + secondSetPower);
	bool flag = false;
	tempSet.Unity(set[0], set[1], flag);

	if (flag == false)
	{
		cout << "ƒва множества нельз€ объеденить!" << endl;
	}
}

void Interface::IntersectionSet()
{

}*/

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
				printMenuText();
				break;
			}
			case 2: {
				CreatedTwoSet();
				printMenuText();
				break;
			}
			case 3: {
				cout << "¬ведите числом в какое множество вы хотите добавить элемент: ";
				int numberSet;
				cin >> numberSet;
				cout << endl;
				AddElement(numberSet);
				printMenuText();
				break;
			}
			case 4: {
				
				printMenuText();
				break;
			}
			case 5: {

				break;
			}
			case 6: {

				
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