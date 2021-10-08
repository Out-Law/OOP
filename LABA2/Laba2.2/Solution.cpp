#include "Solution.h"

Solution::Solution(double* ratio, int power)
	: _ratio(new double[power])
{
	std::copy(ratio, ratio + power, _ratio);
	delete[] ratio;
}

Solution::~Solution()
{
	delete[] _ratio;
}

double Solution::GetRatio(int i) const
{
	return _ratio[i];
}
