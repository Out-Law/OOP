#include "Array.h"
#include <algorithm>

Array::Array(int len)
	:_buf(new double[len]), _len(len)
{

}

double& Array::operator[](int index)
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
