using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_Laba5
{
	class LinearEquation : Solution
	{
		public  LinearEquation(double a, double b) 
			: base(new List<double>(2) {a, b})
		{
		}

		public override List<double> CalculateXResult()
		{
			return new List<double>(1) { -GetRatio(0) / GetRatio(1) };
		}
	}
}
