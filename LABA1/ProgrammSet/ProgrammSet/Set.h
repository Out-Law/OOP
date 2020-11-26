#pragma once
class Set
{
private:
	int _power = 0;
	int* _elements = nullptr;

public:
	//Конструкторы:
	Set();
	Set(int& power);
	Set(int* setElements, int& power);

	//Методы:
	void CreatedSet(int* setElement, int& power);
	int GetPower() const;
	int GetElements(int count) const;
	void AddSetElement(int& element);//Ввод элемента в множество;
	bool CheckSetCommon(Set& set);//Проверка на общие элементы

	//Деструктор
	~Set();
};

