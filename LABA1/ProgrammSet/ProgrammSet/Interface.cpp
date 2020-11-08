#include "Interface.h"
#include "Set.h"
#include <iostream>

using namespace std;

Interface::Interface()
{
	bool running = true;
	int colA = 0, colB = 0;
	Set s1, s2;

	try
	{
		cout << "������� ������ ��������� A: ";
		cin >> colA;

		Set sw1(colA);

		for (int i = 1; i <= colA; i++)
		{
			s1.Add_one_item(i, sw1);//���� �������� � ������
		}
		cout << endl;

		cout << "������� ������ ��������� B: ";
		cin >> colB;

		Set sw2(colB);

		for (int i = 1; i <= colB; i++)
		{
			s1.Add_one_item(i, sw2);
		}
		cout << endl;

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
	catch (int)
	{
		cout << "������" << endl;
	}
}

void Interface::printMenuText() {
	cout << "\n������� 1, ����� ���������� ���������.\n������� 2, ����� ��������� ����������� ��������.\n"
		"������� 3, ����� ��������� �������� ��������.\n������� 4, ����� ��������� ������������� �������� ��������\n"
		"===================================================================================";
}