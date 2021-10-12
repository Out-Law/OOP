using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using OOP_Laba5;

namespace LABA6
{
	public partial class MenuForm : Form
	{
		private int _count = 0;
		Solution[] _equation;
		private int i = 0;
		private List<double> listParams = new List<double>(3) { 0, 0, 0 };

		public MenuForm()
		{
			InitializeComponent();
			radioButtonLin.Checked = true;
		}

		private void buttonEquationCount(object sender, EventArgs e)
		{
			_count = System.Convert.ToInt32(textBoxCount.Text);
			if (_count <= 0)
			{
				textBoxCount.Text = "Error";
			}
			else if (_count > 0)
			{
				textBoxCount.Text = "Good";
				createEmptyArr();
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

	
		private void buttonCreateEquation(object sender, EventArgs e)
		{
			char T ='L';

			int k = i + 1;
			textAdd.Text = "Add equation №" + k;

			if (radioButtonLin.Checked == true)
			{
				T = 'L';
				listParams[0] = Convert.ToInt32(textBoxA.Text);
				listParams[1] = Convert.ToInt32(textBoxB.Text);
			}
			else if (radioButtonQuad.Checked == true)
			{
				T = 'Q';
				listParams[0] = Convert.ToInt32(textBoxA.Text);
				listParams[1] = Convert.ToInt32(textBoxB.Text);
				listParams[2] = Convert.ToInt32(textBoxC.Text);
			}
			_equation[i] = EquationFactory.СreateEquation(T, listParams);

			i++;

			if (i == _count)
			{
				buttonAdd.Enabled = false;
				i = 0;
			}

		}

		private void buttonArgumentOutput(object sender, EventArgs e)
		{
			try
			{
				List<double> result = _equation[figureID()].CalculateXResult();
				foreach (double i in result)
				{
					MessageBox.Show(Convert.ToString(i));
				}
			}
			catch (Exception ex)
			{
				MessageBox.Show($"Ошибка: {ex.Message}");
			}
		}

		private int figureID()
		{
			int figure_id;
			do
			{
				figure_id = Convert.ToInt32(textBoxID.Text);
			} while (figure_id < 1 || figure_id > _count);

			return figure_id - 1;
		}

		private void buttonExit(object sender, EventArgs e)
		{
			Application.Exit();
		}

		private void checkBoxLinear(object sender, EventArgs e)
		{
			CheckBox checkBoxLinear = (CheckBox)sender; // приводим отправителя к элементу типа CheckBox
			if (checkBoxLinear.Checked == true)
			{
				MessageBox.Show("Флажок " + checkBoxLinear.Text + "  теперь отмечен");
			}
			else
			{
				MessageBox.Show("Флажок " + checkBoxLinear.Text + "  теперь не отмечен");
			}
		}

		private void radioButtonLinear(object sender, EventArgs e)
		{
			textBoxC.Enabled = false;
		}

		private void radioButtonQuadratic(object sender, EventArgs e)
		{
			textBoxC.Enabled = true;
		}
	}
}
