#pragma once
class Set
{
private:
	int _power = 0;//���������� ��� ������� ���������� ��������� ���������;
	int* _elements = nullptr;//���������� ��� �������� �������� ��������� ���������;

public:
	//������������:
	Set();//������ ����������;
	Set(int power);//����������� � �����������;

	//������:
	void CreatedSet(int* setElement, int power);
	int GetPower() const;
	int GetElements() const;
	void AddSetElement(int i);//���� �������� � ���������;
	void Unity(Set, Set);//������� ��� ����������� ��������;
	bool isIntersection(Set, Set);//������� ��� ����������� ������� �����������;
	void Intersection(Set, Set);//������� ��� ����������� ��������;

	//����������
	~Set();
};

