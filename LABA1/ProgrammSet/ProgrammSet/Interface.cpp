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

	cout << "������� "<< power <<" ����� ����� ������: ";

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
	cout << "������� �������: ";
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
		cout << "��� ��������� ������ ����������!" << endl;
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
				cout << "������� ������ ����� ��������� �� ������ ��������: ";
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
				cout << "������� ������ � ����� ��������� �� ������ �������� �������: ";
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
		cout << "������" << endl;
	}
}

void Interface::printMenuText() {
	cout << "\n������� 1, ����� �������� ���� �� ��������.\n������� 2, ����� �������� ��� ���������.\n"
		"������� 3, ����� ��������� � ��������� ����� �������.\n������� 4, ����� ���������� ���������\n"
		"===================================================================================" << endl;
}