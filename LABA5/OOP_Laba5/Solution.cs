using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_Laba5
{
	abstract class Solution
	{

		private List<double> _ratio;

		public Solution(List<double> ratioVector)
		{
			_ratio = ratioVector;

		}

		public virtual List<double> CalculateXResult() { return _ratio; }

		protected double GetRatio(int i)
		{
			return _ratio[i];
		}
	}
}
