﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LABA6
{
	public partial class StartForm : Form
	{
		public StartForm()
		{
			InitializeComponent();
		}

		private void buttonStart(object sender, EventArgs e)
		{
			MenuForm menu = new MenuForm();
			menu.ShowDialog();
		}

		private void buttonExit(object sender, EventArgs e)
		{
			Application.Exit();
		}
	}
}
