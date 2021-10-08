#include "Solution.h"

Solution::Solution(const Array& ratio)
	: _ratio(ratio)
{	
}

Solution::~Solution()
{
	
}

double Solution::GetRatio(int i) const
{
	return _ratio[i];
}
