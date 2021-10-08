#pragma once
class Array
{
public:
	Array(int len);
	double& operator[](int index);
	Array& operator=(const Array& other);
	int Size() const;

	~Array();

private:
	double* _buf = nullptr;
	int _len = 0;
	
};

