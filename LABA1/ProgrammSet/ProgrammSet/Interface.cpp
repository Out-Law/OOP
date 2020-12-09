#include "Interface.h"
#include "Set.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Interface::ChangeSet(int& numberSet)
{
	int power;
	cout << "������� ������� ��� ���������: ";
	cin >> power;

	while (power<0)
	{
		cout << "������: ������� �� ������������� �����:" << endl;
		cin >> power;
	}
	cout << "������� " << power << " ����� ����� ������: ";
	int* setElement = new int[power];

	for (int i = 0; i < power; i++)
	{
		cin >> setElement[i];
	}

	set[numberSet].CreatedSet(setElement, power);
	delete[] setElement;
	cout << endl;
	
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
	cout << "������� �������: ";
	int element;
	cin >> element;
	set[numberSet].AddSetElement(element);
}

void Interface::CheckCommon() const
{
	if (set[0].CheckSetCommon(set[1]))
	{
		cout << "� �������� ���� ����� ��������" << endl;
	}
	else
	{
		cout << "� �������� ��� ���� ��������� " << endl;
	}
}

void Interface::GetPower(int& numberSet) const
{
	cout << set[numberSet].GetPower();
}

void Interface::GetElements(int& numberSet) const
{
	for (int i = 0; i < set[numberSet].GetPower(); i++)
	{
		cout << set[numberSet].GetElements(i)<< ' ';
	}
	cout << endl;
}

int Interface::numberSet()
{
	int number;
	cout << "�������� ��������� � ������� ����� ����������� ���������: 1 ��� 2" << endl;
	cin >> number;
	cout << endl;
	return number - 1;
}

void Interface::printMenuText()
{
	cout << "\n������� 1, ����� �������� ���� �� ��������.\n������� 2, ����� �������� ��� ���������.\n"
		"������� 3, ����� ��������� � ��������� ����� �������.\n������� 4, ����� ��������� ���� �� ����� ��������\n"
		"������� 5, ����� ������ � ��������� ��������.\n������� 6, ����� ������ ����� �������� ��������� ���������\n"
		"===================================================================================" << endl;
}

Interface::Interface()
{
	bool running = true;
	CreatedTwoSet();

	while (running)
	{
		printMenuText();

		int input, number;
		cin >> input;

		switch (input) {
				printMenuText();
			case 0: {
				running = false;
				cout << "GoodBuy" << endl;
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
		}
	}
}
