#include "Interface.h"
#include "Set.h"
#include <iostream>

using namespace std;

void Interface::ChangeSet(int numberSet)
{
	int power;

	cout << "������� ������� ��� ���������: ";
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
				cout << "������� ������ ����� ��������� �� ������ ��������: ";
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
				cout << "������� ������ � ����� ��������� �� ������ �������� �������: ";
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
		cout << "������" << endl;
	}
}

void Interface::printMenuText() {
	cout << "\n������� 1, ����� �������� ���� �� ��������.\n������� 2, ����� �������� ��� ���������.\n"
		"������� 3, ����� ��������� � ��������� ����� �������.\n������� 4, ����� ���������� ���������\n"
		"===================================================================================" << endl;
}