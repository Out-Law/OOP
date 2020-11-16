#pragma once
#include "Set.h"

class Interface
{
public:
	Interface();
	void printMenuText();
private:
	Set set[2];

	void CreatedTwoSet();//создание двух множеств
	void ChangeSet(int numberSet); //Изменить одно из множеств
	void AddElement(int numberSet);//добовление элемента
	void CheckCommon();
	void GetPower(int numberSet);
	void GetElements(int numberSet);
	//void UnitySet();//объединение
	//void IntersectionSet();//пересачание

};

