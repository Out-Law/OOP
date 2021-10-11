using System;
using System.Collections.Generic;

namespace OOP_Laba5
{
    class ConsoleInteractor
    {

        private int _count = 0;
        Solution[] _equation;
        public void start()
        {
            try
            {
                dialogEquationCount();
                createEmptyArr();
                createEquation();
                dialog();
            } catch (Exception ex)
            {
                Console.WriteLine(ex);
            }
        }

        private void dialog()
        {
            bool running = true;

            while (running)
            {
                printMenuText();
                int input;
                input = Convert.ToInt32(Console.ReadLine());
                try
                {
                    switch (input)
                    {
                        case 0:
                            {
                                running = false;
                                Console.WriteLine("GoodBuy");
                            }
                            break;
                        case 1:
                            {
                                List<double> result = _equation[figureID()].CalculateXResult();
                                foreach (double i in result)
                                {
                                    Console.WriteLine(i);
                                }
                            } 
                            break;
                        default:
                            {
                                running = false;
                            }
                            break;
                    }
                }
                catch (Exception e)
                {
                    Console.WriteLine($"Ошибка: {e.Message}");
                }
            }
        }

		private int figureID()
		{
            int figure_id;
            do
            {
                Console.WriteLine("Enter Equation ID: ");
                figure_id = Convert.ToInt32(Console.ReadLine());
            } while (figure_id < 1 || figure_id > _count);

            return figure_id - 1;
        }

		private void createEquation()
		{
            char T;
			List<double> listParams = new List<double>(3) { 0, 0, 0 };

            for (int i = 0; i < _count; ++i)
            {
                Console.WriteLine("---Equation #v"+i + 1+"---");


                Console.WriteLine("What equation to create? | (L) - linear equation, (Q) - quadratic equation");
                T = Convert.ToChar(Console.ReadLine());

                if (T == 'L')
                {
                    Console.WriteLine("Enter coefficients a, b (a * x - b)");
                    listParams[0] = Convert.ToInt32(Console.ReadLine());
                    listParams[1] = Convert.ToInt32(Console.ReadLine());
                }
                else if (T == 'Q')
                {
                    Console.WriteLine("Enter coefficients a, b, c (a * x - b * x + c + 0)");
                    listParams[0] = Convert.ToInt32(Console.ReadLine());
                    listParams[1] = Convert.ToInt32(Console.ReadLine());
                    listParams[2] = Convert.ToInt32(Console.ReadLine());
                }
                _equation[i] = EquationFactory.СreateEquation(T, listParams);
            }
        }

		private void createEmptyArr()
		{
            _equation = new Solution[_count];
            for (int i = 0; i < _count; ++i)
            {
                _equation[i] = null;
            }
        }

		private void dialogEquationCount()
		{
            do
            {
                Console.WriteLine("How many equations will there be?: ");
                _count = Convert.ToInt32(Console.ReadLine());
            } while (_count <= 0);
        }

        private void printMenuText()
        {
            Console.WriteLine("-------------------------------");
            Console.WriteLine("1 - Print the answer to the equation by ID");
            Console.WriteLine("0 - Exit");
            Console.WriteLine("-------------------------------");
        }
    }
}
