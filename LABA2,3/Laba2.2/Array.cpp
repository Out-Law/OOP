#include "Array.h"
#include <algorithm>

Array::Array(int len)
	:_buf(new double[len]), _len(len)
{

}

Array::Array(const std::initializer_list<double>& lst)
	: Array(lst.size())
{
	std::copy(lst.begin(), lst.end(), _buf);
}

Array::Array(const Array& other)
	: _buf(new double[other._len]), _len(other._len)
{
	std::copy(other._buf, other._buf + other._len, _buf);
}


double& Array::operator[](int index)
{
	return _buf[index];
}

double Array::operator[](int index) const
{
	return _buf[index];
}

Array& Array::operator=(const Array& other)
{
	_len = other._len;

	delete[] _buf;
	_buf = new double[other._len];

	std::copy(other._buf, other._buf + other._len, _buf);
	return *this;
}

int Array::Size() const
{
	return _len;
}

Array::~Array()
{
	delete[] _buf;
}
