#pragma once
class Set
{
private:
	int _power = 0;//Переменная для задания количества элементов множества;
	int* _elements = nullptr;//Переменная для хранения значений элементов множества;

public:
	//Конструкторы:
	Set();//Пустой консруктор;
	Set(int power);//Конструктор с параметрами;

	//Методы:
	void CreatedSet(int* setElement, int power);
	int GetPower() const;
	int GetElements() const;
	void AddSetElement(int i);//Ввод элемента в множество;
	bool CheckCommon(Set set);//Проверка на общие элементы
	void Unity(Set firstSet, Set secondSet);//функция для объединения множеств;
	void Intersection(Set firstSet, Set secondSet);//Функция для пересечения множеств;

	//Деструктор
	~Set();
};

