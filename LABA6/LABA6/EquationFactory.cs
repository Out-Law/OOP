using System;
using System.Collections.Generic;
using System.Text;

namespace OOP_Laba5
{
	class EquationFactory
	{
        public static Solution СreateEquation(char T, in List<double> listParams)
        {
            switch (T)
            {
                case 'L':
                    {
                        return new LinearEquation(listParams[0], listParams[1]);
                    }
                case 'Q':
                    {
                        return new QuadraticEquation(listParams[0], listParams[1], listParams[2]);
                    }
                default:
                    {
                        throw new Exception("Incorrect equation type!");
                    }
            }
        }
    }
}
