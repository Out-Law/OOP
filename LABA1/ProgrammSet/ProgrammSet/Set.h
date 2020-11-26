#pragma once
class Set
{
private:
	int _power = 0;
	int* _elements = nullptr;

public:
	//������������:
	Set();
	Set(int& power);
	Set(int* setElements, int& power);

	//������:
	void CreatedSet(int* setElement, int& power);
	int GetPower() const;
	int GetElements(int count) const;
	void AddSetElement(int& element);//���� �������� � ���������;
	bool CheckSetCommon(Set& set);//�������� �� ����� ��������

	//����������
	~Set();
};

