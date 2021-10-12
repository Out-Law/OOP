
namespace LABA6
{
	partial class MenuForm
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.buttonAdd = new System.Windows.Forms.Button();
			this.label1 = new System.Windows.Forms.Label();
			this.textBoxCount = new System.Windows.Forms.TextBox();
			this.button2 = new System.Windows.Forms.Button();
			this.label2 = new System.Windows.Forms.Label();
			this.textBoxA = new System.Windows.Forms.TextBox();
			this.label3 = new System.Windows.Forms.Label();
			this.textAdd = new System.Windows.Forms.Label();
			this.textBoxB = new System.Windows.Forms.TextBox();
			this.textBoxC = new System.Windows.Forms.TextBox();
			this.label5 = new System.Windows.Forms.Label();
			this.label6 = new System.Windows.Forms.Label();
			this.label7 = new System.Windows.Forms.Label();
			this.label8 = new System.Windows.Forms.Label();
			this.textBoxID = new System.Windows.Forms.TextBox();
			this.button3 = new System.Windows.Forms.Button();
			this.button4 = new System.Windows.Forms.Button();
			this.radioButtonLin = new System.Windows.Forms.RadioButton();
			this.radioButtonQuad = new System.Windows.Forms.RadioButton();
			this.SuspendLayout();
			// 
			// buttonAdd
			// 
			this.buttonAdd.Location = new System.Drawing.Point(351, 289);
			this.buttonAdd.Name = "buttonAdd";
			this.buttonAdd.Size = new System.Drawing.Size(222, 64);
			this.buttonAdd.TabIndex = 2;
			this.buttonAdd.Text = "+Add";
			this.buttonAdd.UseVisualStyleBackColor = true;
			this.buttonAdd.Click += new System.EventHandler(this.buttonCreateEquation);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label1.Location = new System.Drawing.Point(26, 40);
			this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(272, 25);
			this.label1.TabIndex = 3;
			this.label1.Text = "Enter the number of equations";
			// 
			// textBoxCount
			// 
			this.textBoxCount.Location = new System.Drawing.Point(390, 44);
			this.textBoxCount.Name = "textBoxCount";
			this.textBoxCount.Size = new System.Drawing.Size(162, 22);
			this.textBoxCount.TabIndex = 4;
			this.textBoxCount.Text = "0";
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(619, 31);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(61, 48);
			this.button2.TabIndex = 5;
			this.button2.Text = "OK";
			this.button2.UseVisualStyleBackColor = true;
			this.button2.Click += new System.EventHandler(this.buttonEquationCount);
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label2.Location = new System.Drawing.Point(26, 104);
			this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(216, 25);
			this.label2.TabIndex = 6;
			this.label2.Text = "Select an equation type";
			// 
			// textBoxA
			// 
			this.textBoxA.Location = new System.Drawing.Point(405, 170);
			this.textBoxA.Name = "textBoxA";
			this.textBoxA.Size = new System.Drawing.Size(73, 22);
			this.textBoxA.TabIndex = 7;
			this.textBoxA.Text = "0";
			// 
			// label3
			// 
			this.label3.AutoSize = true;
			this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label3.Location = new System.Drawing.Point(26, 167);
			this.label3.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(325, 25);
			this.label3.TabIndex = 8;
			this.label3.Text = "Enter the coefficients of the equation";
			// 
			// textAdd
			// 
			this.textAdd.AutoSize = true;
			this.textAdd.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.textAdd.Location = new System.Drawing.Point(389, 246);
			this.textAdd.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.textAdd.Name = "textAdd";
			this.textAdd.Size = new System.Drawing.Size(163, 25);
			this.textAdd.TabIndex = 9;
			this.textAdd.Text = "Add equation №1";
			// 
			// textBoxB
			// 
			this.textBoxB.Location = new System.Drawing.Point(539, 171);
			this.textBoxB.Name = "textBoxB";
			this.textBoxB.Size = new System.Drawing.Size(73, 22);
			this.textBoxB.TabIndex = 10;
			this.textBoxB.Text = "0";
			// 
			// textBoxC
			// 
			this.textBoxC.Enabled = false;
			this.textBoxC.Location = new System.Drawing.Point(667, 167);
			this.textBoxC.Name = "textBoxC";
			this.textBoxC.Size = new System.Drawing.Size(73, 22);
			this.textBoxC.TabIndex = 11;
			this.textBoxC.Text = "0";
			// 
			// label5
			// 
			this.label5.AutoSize = true;
			this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label5.Location = new System.Drawing.Point(422, 195);
			this.label5.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label5.Name = "label5";
			this.label5.Size = new System.Drawing.Size(26, 25);
			this.label5.TabIndex = 12;
			this.label5.Text = "A";
			// 
			// label6
			// 
			this.label6.AutoSize = true;
			this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label6.Location = new System.Drawing.Point(557, 196);
			this.label6.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label6.Name = "label6";
			this.label6.Size = new System.Drawing.Size(25, 25);
			this.label6.TabIndex = 13;
			this.label6.Text = "B";
			// 
			// label7
			// 
			this.label7.AutoSize = true;
			this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label7.Location = new System.Drawing.Point(683, 196);
			this.label7.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label7.Name = "label7";
			this.label7.Size = new System.Drawing.Size(27, 25);
			this.label7.TabIndex = 14;
			this.label7.Text = "C";
			// 
			// label8
			// 
			this.label8.AutoSize = true;
			this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
			this.label8.Location = new System.Drawing.Point(28, 473);
			this.label8.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label8.Name = "label8";
			this.label8.Size = new System.Drawing.Size(164, 25);
			this.label8.TabIndex = 15;
			this.label8.Text = "Enter Equation ID";
			// 
			// textBoxID
			// 
			this.textBoxID.Location = new System.Drawing.Point(294, 477);
			this.textBoxID.Name = "textBoxID";
			this.textBoxID.Size = new System.Drawing.Size(154, 22);
			this.textBoxID.TabIndex = 16;
			this.textBoxID.Text = "0";
			// 
			// button3
			// 
			this.button3.Location = new System.Drawing.Point(667, 456);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(222, 64);
			this.button3.TabIndex = 22;
			this.button3.Text = "End the program";
			this.button3.UseVisualStyleBackColor = true;
			this.button3.Click += new System.EventHandler(this.buttonExit);
			// 
			// button4
			// 
			this.button4.Location = new System.Drawing.Point(502, 464);
			this.button4.Name = "button4";
			this.button4.Size = new System.Drawing.Size(61, 48);
			this.button4.TabIndex = 23;
			this.button4.Text = "OK";
			this.button4.UseVisualStyleBackColor = true;
			this.button4.Click += new System.EventHandler(this.buttonArgumentOutput);
			// 
			// radioButtonLin
			// 
			this.radioButtonLin.AutoSize = true;
			this.radioButtonLin.Location = new System.Drawing.Point(333, 104);
			this.radioButtonLin.Name = "radioButtonLin";
			this.radioButtonLin.Size = new System.Drawing.Size(125, 21);
			this.radioButtonLin.TabIndex = 28;
			this.radioButtonLin.TabStop = true;
			this.radioButtonLin.Text = "LinearEquation";
			this.radioButtonLin.UseVisualStyleBackColor = true;
			this.radioButtonLin.CheckedChanged += new System.EventHandler(this.radioButtonLinear);
			// 
			// radioButtonQuad
			// 
			this.radioButtonQuad.AutoSize = true;
			this.radioButtonQuad.Location = new System.Drawing.Point(470, 104);
			this.radioButtonQuad.Name = "radioButtonQuad";
			this.radioButtonQuad.Size = new System.Drawing.Size(147, 21);
			this.radioButtonQuad.TabIndex = 29;
			this.radioButtonQuad.TabStop = true;
			this.radioButtonQuad.Text = "QuadraticEquation";
			this.radioButtonQuad.UseVisualStyleBackColor = true;
			this.radioButtonQuad.CheckedChanged += new System.EventHandler(this.radioButtonQuadratic);
			// 
			// MenuForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(911, 543);
			this.Controls.Add(this.radioButtonQuad);
			this.Controls.Add(this.radioButtonLin);
			this.Controls.Add(this.button4);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.textBoxID);
			this.Controls.Add(this.label8);
			this.Controls.Add(this.label7);
			this.Controls.Add(this.label6);
			this.Controls.Add(this.label5);
			this.Controls.Add(this.textBoxC);
			this.Controls.Add(this.textBoxB);
			this.Controls.Add(this.textAdd);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.textBoxA);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.textBoxCount);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.buttonAdd);
			this.Name = "MenuForm";
			this.Text = "Form2";
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion
		private System.Windows.Forms.Button buttonAdd;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.TextBox textBoxCount;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.TextBox textBoxA;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Label textAdd;
		private System.Windows.Forms.TextBox textBoxB;
		private System.Windows.Forms.TextBox textBoxC;
		private System.Windows.Forms.Label label5;
		private System.Windows.Forms.Label label6;
		private System.Windows.Forms.Label label7;
		private System.Windows.Forms.Label label8;
		private System.Windows.Forms.TextBox textBoxID;
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button button4;
		private System.Windows.Forms.RadioButton radioButtonLin;
		private System.Windows.Forms.RadioButton radioButtonQuad;
	}
}