#include "Interface.h"
#include "Set.h"
#include <iostream>

using namespace std;

Interface::Interface()
{
	bool running = true;

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

			printMenuText();
			break;
		}

		case 2: {

			printMenuText();
			break;
		}
		case 3: {

			printMenuText();
			break;
		}
		case 4: {

			printMenuText();
			break;
		}
		case 5: {

			printMenuText();
			break;
		}
		case 6: {

			printMenuText();
			break;
		}
		}
	}
}

void Interface::printMenuText() {
	cout << "\n¬ведите 1, чтобы вывести марку.\n¬ведите 2, чтобы узнать собственный номер.\n"
		"¬ведите 3, чтобы вывести список сохраненных номеров.\n¬ведите 4, чтобы вывести количество звонков\n"
		"¬ведите 5, чтобы вывести данные о тарифе\n"
		"==================================================================================="
		"\n¬ведите 6, чтобы зайти в основные функции телефона";
}