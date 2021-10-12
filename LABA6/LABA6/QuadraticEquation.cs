using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_Laba5
{
	class QuadraticEquation : Solution
	{
		public QuadraticEquation(double a, double b, double c)
			: base(new List<double>(3) {a, b, c}){}

		private void CheckDisscriminant()
		{
			if ((Math.Pow(GetRatio(0), 2) - (4 * GetRatio(1) * GetRatio(2))) < 0)
			{
				throw new Exception("Discriminant < 0");
			}
		}

		public override List<double> CalculateXResult()
		{
			this.CheckDisscriminant();

			List<double> result = new List<double>();
			result.Add((-GetRatio(1) + Math.Sqrt(Math.Pow(GetRatio(1), 2) - 
				4 * GetRatio(0) * GetRatio(2))) / (2 * GetRatio(0)));
			result.Add((-GetRatio(1) - Math.Sqrt(Math.Pow(GetRatio(1), 2) -
				4 * GetRatio(0) * GetRatio(2))) / (2 * GetRatio(0)));

			return result;
		}
	}
}
