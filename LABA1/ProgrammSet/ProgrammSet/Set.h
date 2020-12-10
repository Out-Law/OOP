#pragma once
class Set
{
public:
	Set();
	Set(int& power);

	void CreateSet(int* setElement, int& power);
	int GetPower() const;
	int GetElements(int id) const;
	void AddSetElement(int& element);
	bool CheckSetCommon(Set& set) const;

	~Set();
private:
	int _power = 0;
	int* _elements = nullptr;
};

