#include "Solution.h"

Solution::Solution(const std::vector<double>& ratioVector)
	: _ratio(ratioVector)
{
	
}

double Solution::GetRatio(int i) const
{
	return _ratio[i];
}
