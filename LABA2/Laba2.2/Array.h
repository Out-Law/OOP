#pragma once
#include <initializer_list>

class Array
{
public:
	Array(int len);
	Array(const std::initializer_list<double>& lst);
	Array(const Array& other);
	~Array();

	double& operator[](int index);
	double operator[](int index) const;
	Array& operator=(const Array& other);

	
	int Size() const;

private:
	double* _buf = nullptr;
	int _len = 0;
	
};

