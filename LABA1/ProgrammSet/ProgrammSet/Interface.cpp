#include "Interface.h"
#include "Set.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Interface::ChangeSet(int& numberSet)
{
	int power;
	cout << "Введите мщность для множества: ";
	cin >> power;

	while (power<0)
	{
		cout << "Ошибка: введите не отрицательное число:" << endl;
		cin >> power;
	}
	cout << "Введите " << power << " чисел через пробел: ";
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
	cout << "Введите элемент: ";
	int element;
	cin >> element;
	set[numberSet].AddSetElement(element);
}

void Interface::CheckCommon() const
{
	if (set[0].CheckSetCommon(set[1]))
	{
		cout << "У множеств ЕСТЬ общие элементы" << endl;
	}
	else
	{
		cout << "У множеств НЕТ общх элементов " << endl;
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
	cout << "Выбирете множество в котором будут производить изменения: 1 или 2" << endl;
	cin >> number;
	cout << endl;
	return number - 1;
}

void Interface::printMenuText()
{
	cout << "\nВведите 1, чтобы изменить одно из множеств.\nВведите 2, чтобы изменить оба множества.\n"
		"Введите 3, чтобы добаувить в множество новый элемент.\nВведите 4, чтобы проверить есть ли общие элементы\n"
		"Введите 5, чтобы узнать у множества Мощность.\nВведите 6, чтобы узнать какие элементы создержит множество\n"
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
