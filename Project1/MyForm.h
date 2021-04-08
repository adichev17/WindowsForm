#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ about_Program;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownM;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ create_matrix;
	private: System::Windows::Forms::Button^ range_matrix;




	private: System::Windows::Forms::Button^ exit_button;
	private: System::Windows::Forms::Button^ MainFunc_button;
	private: System::Windows::Forms::Button^ clear_data;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::GroupBox^ groupBox1;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->about_Program = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownN = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownM = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->create_matrix = (gcnew System::Windows::Forms::Button());
			this->range_matrix = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->MainFunc_button = (gcnew System::Windows::Forms::Button());
			this->clear_data = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// about_Program
			// 
			this->about_Program->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->about_Program->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->about_Program->Location = System::Drawing::Point(12, 12);
			this->about_Program->Name = L"about_Program";
			this->about_Program->Size = System::Drawing::Size(135, 27);
			this->about_Program->TabIndex = 0;
			this->about_Program->Text = L"Об программе";
			this->about_Program->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->about_Program->UseVisualStyleBackColor = false;
			this->about_Program->Click += gcnew System::EventHandler(this, &MyForm::about_Program_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(167, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Матрица";
			// 
			// numericUpDownN
			// 
			this->numericUpDownN->BackColor = System::Drawing::SystemColors::Info;
			this->numericUpDownN->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownN->Location = System::Drawing::Point(108, 85);
			this->numericUpDownN->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownN->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN->Name = L"numericUpDownN";
			this->numericUpDownN->Size = System::Drawing::Size(73, 23);
			this->numericUpDownN->TabIndex = 2;
			this->numericUpDownN->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownM
			// 
			this->numericUpDownM->BackColor = System::Drawing::SystemColors::Info;
			this->numericUpDownM->Location = System::Drawing::Point(284, 86);
			this->numericUpDownM->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownM->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM->Name = L"numericUpDownM";
			this->numericUpDownM->Size = System::Drawing::Size(73, 22);
			this->numericUpDownM->TabIndex = 3;
			this->numericUpDownM->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Wheat;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 165);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(595, 387);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// create_matrix
			// 
			this->create_matrix->BackColor = System::Drawing::Color::PaleTurquoise;
			this->create_matrix->Location = System::Drawing::Point(170, 121);
			this->create_matrix->Name = L"create_matrix";
			this->create_matrix->Size = System::Drawing::Size(84, 38);
			this->create_matrix->TabIndex = 5;
			this->create_matrix->Text = L"Создать";
			this->create_matrix->UseVisualStyleBackColor = false;
			this->create_matrix->Click += gcnew System::EventHandler(this, &MyForm::create_matrix_Click);
			// 
			// range_matrix
			// 
			this->range_matrix->BackColor = System::Drawing::Color::PaleTurquoise;
			this->range_matrix->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->range_matrix->Location = System::Drawing::Point(168, 48);
			this->range_matrix->Name = L"range_matrix";
			this->range_matrix->Size = System::Drawing::Size(156, 58);
			this->range_matrix->TabIndex = 6;
			this->range_matrix->Text = L"Сгенерировать значения";
			this->range_matrix->UseVisualStyleBackColor = false;
			this->range_matrix->Visible = false;
			this->range_matrix->Click += gcnew System::EventHandler(this, &MyForm::range_matrix_Click);
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::Color::PaleTurquoise;
			this->exit_button->Location = System::Drawing::Point(781, 558);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(156, 58);
			this->exit_button->TabIndex = 11;
			this->exit_button->Text = L"Выход";
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &MyForm::exit_button_Click);
			// 
			// MainFunc_button
			// 
			this->MainFunc_button->BackColor = System::Drawing::Color::PaleTurquoise;
			this->MainFunc_button->Location = System::Drawing::Point(211, 558);
			this->MainFunc_button->Name = L"MainFunc_button";
			this->MainFunc_button->Size = System::Drawing::Size(156, 58);
			this->MainFunc_button->TabIndex = 12;
			this->MainFunc_button->Text = L"Рассчитать";
			this->MainFunc_button->UseVisualStyleBackColor = false;
			this->MainFunc_button->Visible = false;
			this->MainFunc_button->Click += gcnew System::EventHandler(this, &MyForm::MainFunc_button_Click);
			// 
			// clear_data
			// 
			this->clear_data->BackColor = System::Drawing::Color::PaleTurquoise;
			this->clear_data->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_data->Location = System::Drawing::Point(6, 48);
			this->clear_data->Name = L"clear_data";
			this->clear_data->Size = System::Drawing::Size(156, 58);
			this->clear_data->TabIndex = 13;
			this->clear_data->Text = L"Очистить";
			this->clear_data->UseVisualStyleBackColor = false;
			this->clear_data->Visible = false;
			this->clear_data->Click += gcnew System::EventHandler(this, &MyForm::clear_data_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Строки:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(208, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Столбцы:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->range_matrix);
			this->groupBox1->Controls->Add(this->clear_data);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(613, 86);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 380);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Действия с матрицей";
			this->groupBox1->Visible = false;
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(1153, 697);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MainFunc_button);
			this->Controls->Add(this->create_matrix);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->numericUpDownM);
			this->Controls->Add(this->numericUpDownN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->about_Program);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void create_matrix_Click(System::Object^ sender, System::EventArgs^ e);
	private: void show();
private: System::Void range_matrix_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void about_Program_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainFunc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void clear_data_Click(System::Object^ sender, System::EventArgs^ e);
};
}
