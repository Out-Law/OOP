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
	cout << "\n������� 1, ����� ������� �����.\n������� 2, ����� ������ ����������� �����.\n"
		"������� 3, ����� ������� ������ ����������� �������.\n������� 4, ����� ������� ���������� �������\n"
		"������� 5, ����� ������� ������ � ������\n"
		"==================================================================================="
		"\n������� 6, ����� ����� � �������� ������� ��������";
}