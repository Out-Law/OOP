#include "Set.h"
#include <iostream>
#include <string>
using namespace std;

Set::~Set()//���������� ��������� ������ ������
{
	delete[] item;
}

Set::Set(){} // ������ �����������

Set::Set(int p)
{
	item = new int[p];
	col = p;
}


void Set::Add_one_item(int i, Set x)//���� �������� � ������
{
	int date, l, j, m = 0;

	while (1)
	{
		l = 0;
		j = 1;
		m = 1;
		cout << "������� �������� ��������: ";
		cin >> date;
		while (j <= i)
		{
			if (date == x.item[j])
			{
				cout << "������� � ����� ��������� ��� ������������ � ���������, ������� ������ �������� ��������.\n";
				l++;
				break;
			}
			else
			{
				m = m + 1;
			}
			j++;
		}

		if (l == 0)
		{
			if (m == i + 1)
			{
				x.item[i] = date;
				break;
			}
		}
	}
}

void Set::printSet(Set x) //����� ���������� ��������
{
	for (int i = 1; i <= x.col; i++)
	{
		cout << x.item[i] << " ";
	}

	cout << endl << endl;
}

void Set::Unity(Set x, Set y)//������� ��� ����������� ��������
{
	int j, i, m = 1, f = 0;
	for (i = 1; i <= x.col; i++)
	{
		f++;
	}
	for (i = 1; i <= y.col; i++)
	{
		for (j = 1; j <= x.col; j++)
		{
			if (y.item[i] == x.item[j])
			{
				continue;
			}
			else
			{
				m++;
			}
		}

		if (m == x.col + 1)
		{
			f++;
		}

		m = 1;
	}

	Set sw4(f);

	f = 0;
	for (i = 1; i <= x.col; i++)
	{
		f++;
		sw4.item[i] = x.item[i];
	}

	for (i = 1; i <= y.col; i++)
	{
		for (j = 1; j <= x.col; j++)
		{
			if (y.item[i] == x.item[j])
			{
				continue;
			}
			else
			{
				m++;
			}
		}

		if (m == x.col + 1)
		{
			f++;
			sw4.item[f] = y.item[i];
		}
		m = 1;
	}

	x.printSet(sw4);//����� ����������� ��������
}

void Set::Intersection(Set x, Set y)//������� ��� ����������� ��������
{
	int l = 0, n = 1;

	for (int i = 1; i <= x.col; i++)
	{
		for (int j = 1; j <= y.col; j++)
		{
			if (x.item[i] == y.item[j])
			{
				l++;
			}
		}
	}

	Set sw3(l);

	for (int i = 1; i <= x.col; i++)
	{
		for (int j = 1; j <= y.col; j++)
		{
			if (x.item[i] == y.item[j])
			{
				sw3.item[n] = x.item[i];
				n++;
			}
		}
	}

	x.printSet(sw3);//����� ����������� ��������
}

bool Set::isIntersection(Set x, Set y)//������� ��� ����������� ������� �����������
{
	for (int i = 1; i <= x.col; i++)
	{
		for (int j = 1; j <= y.col; j++)
		{
			if (x.item[i] == y.item[j])
			{
				return 1;
			}
		}
	}

	return 0;
}