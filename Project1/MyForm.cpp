//25. Дана матрица размера M x N.
//Изменить ее, поставив в каждой строке на первое место минимальный элемент строки.

#include "MyForm.h"
#include <cstdlib> 
#include <fstream>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}

float** Matrix;
int n = 0, m = 0;

System::Void Project1::MyForm::create_matrix_Click(System::Object^ sender, System::EventArgs^ e){
	n = Convert::ToInt32(numericUpDownN->Value);
	m = Convert::ToInt32(numericUpDownM->Value);

	Matrix = new float* [n];
	for (int i = 0; i < n; ++i) {
		Matrix[i] = new float[m];
	}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			Matrix[i][j] = 0;

	dataGridView1->RowCount = n;
	dataGridView1->ColumnCount = m;

	show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	range_matrix->Visible = true;

	create_matrix->Visible = false;
	groupBox1->Visible = true;
	return System::Void();
}

void Project1::MyForm::show()
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			dataGridView1->TopLeftHeaderCell->Value = "Матрица А";
			dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView1->Rows[i]->Cells[j]->Value = Matrix[i][j];

			dataGridView1->Columns[j]->Width = 40;
		}

	MainFunc_button->Visible = true;
	range_matrix->Visible = true;
	clear_data->Visible = true;
}

System::Void Project1::MyForm::range_matrix_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (n == 0 && m == 0) {
		MessageBox::Show("Матрица отсутствует","Внимание!");
		return;
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			Matrix[i][j] = rand() % 50 + 0;
		}
	
	show();
	return System::Void();
}


System::Void Project1::MyForm::dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			try {
				Matrix[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
				Matrix[i][j] = round(Matrix[i][j] * 100) / 100;
				dataGridView1->Rows[i]->Cells[j]->Value = Matrix[i][j];
			}
			catch (...) {
				dataGridView1->Rows[i]->Cells[j]->Value = 0;
				MessageBox::Show("Нельзя вводить символы!", "Ошибка!");
			}
		}
	}
	MainFunc_button->Visible = true;
		return System::Void();
}

System::Void Project1::MyForm::about_Program_Click(System::Object^ sender, System::EventArgs^ e){
		MessageBox::Show("Дана матрица размера N x M. В тех строках, где не все элементы различны, поменять местами наибольший и наименьший элементы, после чего вывести получившуюся матрицу на экран.", "Об программе!");
	return System::Void();
}


System::Void Project1::MyForm::exit_button_Click(System::Object^ sender, System::EventArgs^ e){
	delete[] Matrix;
	exit(1);
	return System::Void();
}

bool check(int i) {
	bool flag = false;
	for (int j = 0; j < m; ++j) {
		for (int k = 0; k < m - 1; ++k)
			if (Matrix[i][j] == Matrix[i][k + 1] && (k + 1) != j) {
				flag = true;
				return flag;
			}
	}
	return flag;
}

System::Void Project1::MyForm::MainFunc_button_Click(System::Object^ sender, System::EventArgs^ e){
	bool flag_for_every_line;
	float min;
	float max;
	int j_for_min = 0;
	int j_for_max = 0;
	bool flag_all_matrix = false;

	for (int i = 0; i < n; ++i) {
		flag_for_every_line = false;
		flag_for_every_line = check(i);//Проверяем строку что не все элементы различны(есть хотябы 2 одинаковых)
		if (flag_for_every_line == true) {
			min = Matrix[i][0];
			max = Matrix[i][0];
			for (int j = 0; j < m; ++j) {
				if (Matrix[i][j] < min) {
					min = Matrix[i][j];
					j_for_min = j;
					flag_all_matrix = true;
				}
				if (Matrix[i][j] > max) {
					max = Matrix[i][j];
					j_for_max = j;
					flag_all_matrix = true;
				}
			}
			Matrix[i][j_for_max] = min; // В ячейку с максимум в строке, присваиваем минимум этой строчки.
			Matrix[i][j_for_min] = max; // В ячейку с минимумом в строке, присваиваем максимум этой строчки.
		}
	}

	show();

	MainFunc_button->Visible = false;
	if (!flag_all_matrix) {
		MessageBox::Show("Ошибка.В строке все элементы не одинаковые", "Внимание!");
		return;
	}
	return System::Void();
}

System::Void Project1::MyForm::clear_data_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			Matrix[i][j] = 0;

	show();
	return System::Void();
}
