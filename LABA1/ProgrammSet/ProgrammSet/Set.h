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
	bool CheckSetCommon(Set set);//�������� �� ����� ��������
	//void Unity(Set firstSet, Set secondSet, bool flagOne);//������� ��� ����������� ��������;
	//void Intersection(Set firstSet, Set secondSet);//������� ��� ����������� ��������;

	//����������
	~Set();
};

