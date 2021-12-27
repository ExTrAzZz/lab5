#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "singly_list.h"

namespace lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(201, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выполнить операцию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Формирование списка", L"Добавление звена в начало списка", 
				L"Удаление звена из начало списка", L"Добавление звена в произвольное место списка", L"Удаление звена из произвольного места списка", 
				L"Проверка, пуст ли список", L"Очистка списка"});
			this->comboBox1->Location = System::Drawing::Point(22, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(378, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(22, 93);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(378, 288);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(435, 93);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(378, 288);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Целый", L"Вещественный", L"Символьный ", L"Строковый"});
			this->comboBox2->Location = System::Drawing::Point(22, 434);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(151, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 414);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Тип данных";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(414, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите значение звена";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(446, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(659, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(355, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Введите номер  места в списке куда нужно вставить";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(776, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(838, 424);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(130, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Выберите операцию";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(141, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Введите список";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 498);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Односвязный список";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	
				std::string *stringArr = new std::string [richTextBox1->Lines->Length]; 
				bool flag = false;
				for (int i=0; i<richTextBox1->Lines->Length; i++)
				{
					System::String^ s = richTextBox1->Lines[i];
					msclr::interop::marshal_context context;
					stringArr[i] = context.marshal_as<std::string>(s);
				}
				switch (comboBox1->SelectedIndex)
				{	
					case 0: // Формирование списка
						if (comboBox2->SelectedIndex == 0) // Целое числа
						{
							countI = richTextBox1->Lines->Length;
							int *A = new int [countI]; // Массив целых чисел
							try {
								for (int i = 0; i<countI; i++)
									A[i] = std::stoi(stringArr[i].c_str()); // Запись в массив 
							}
							catch(...) // Ошибка ввода
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchI.list_create(A,countI); // Формирование списка целого типа
							richTextBox2->Text = "";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // Вещественные числа
						{
							countD = richTextBox1->Lines->Length;
							double *A = new double [countD]; // Массив вещественных чисел
							try {
								for (int i = 0; i<countD; i++)
									A[i] = std::stof(stringArr[i].c_str()); // Запись в массив 
							}
							catch(...) // Ошибка ввода
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchD.list_create(A,countD); // Формирование списка вещественного типа
							richTextBox2->Text = "";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // Символьный тип
						{
								countC = richTextBox1->Lines->Length;
								char *A = new char [countC];
								for (int i = 0; i<countC; i++)
									A[i] = richTextBox1->Lines[i][0];	
								branchC.list_create(A,countC); // Формирование списка символьного типа
								richTextBox2->Text = "";
								for (int i = 0; i<countC; i++)
								{ 
									std::string str = "";
									str = A[i];
									richTextBox2->Text += gcnew System::String(str.c_str())+"\n";
								}
						}
						else if(comboBox2->SelectedIndex == 3)
						{
							countS = richTextBox1->Lines->Length;
							branchS.list_create(stringArr,countS); // Формирование списка строкового типа
							richTextBox2->Text = "";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(stringArr[i].c_str())+"\n";
							}
						}
						else
						{
							MessageBox::Show("Выберите тип");
							return;
						}
						break;
					case 1: // Добавдение звена в начало списка
						if (comboBox2->SelectedIndex == 0) // Целое числа
						{
							int value;
							try
							{
								value = Convert::ToInt32(textBox1->Text); // Значение звена
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchI.push_first(value);
							countI+=1; // Увеличить количество узлов на 1-цу
							
							// Вывод
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // Вещественные числа
						{
							double value;
							try
							{
								value = Convert::ToDouble(textBox1->Text); // Значение звена
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchD.push_first(value);
							countD++; // Увеличить количество узлов на 1-цу
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // Символьный тип
						{
							branchC.push_first(textBox1->Text[0]);
							countC++; // Увиличить количество узлов на 1-цу
							
							char *A = new char [countC];
							branchC.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countC; i++)
							{
								std::string str = "";
								str = A[i];
								richTextBox2->Text += gcnew System::String(str.c_str())+"\n";
							}
								
						}
						else if(comboBox2->SelectedIndex == 3)
						{
							System::String^ s = textBox1->Text;
							msclr::interop::marshal_context context;
							branchS.push_first(context.marshal_as<std::string>(s));
							countS++; // Увиличить количество узлов на 1-цу
							
							std::string *A = new std::string [countS];
							branchS.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(A[i].c_str())+"\n";
							}
										
						}
						else
						{
							MessageBox::Show("Выберите тип");
							return;
						}
						break;
					case 2: // Удаление звена из начало списка
						if (comboBox2->SelectedIndex == 0) // Целое числа
						{
							branchI.pull_first();
							countI--; // Уменьшить количество узлов на 1-цу
							
							// Вывод
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // Вещественные числа
						{
							branchD.pull_first();
							countD--; // Уменьшить количество узлов на 1-цу
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // Символьный тип
						{
							branchC.pull_first();
							countC--; // Уменьшить количество узлов на 1-цу
							
							char *A = new char [countC];
							branchC.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countC; i++)
							{
								std::string str = "";
								str = A[i];
								richTextBox2->Text += gcnew System::String(str.c_str())+"\n";
							}
								
						}
						else if(comboBox2->SelectedIndex == 3)
						{
							branchS.pull_first();
							countS--; // Уменьшить количество узлов на 1-цу
							
							std::string *A = new std::string [countS];
							branchS.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(A[i].c_str())+"\n";
							}
						}
						else
						{
							MessageBox::Show("Выберите тип");
							return;
						}

						break;
					case 3: // Добавление звена в произвольное место списка
						if (comboBox2->SelectedIndex == 0) // Целое числа
						{
							int value;
							int index;
							try
							{
								value = Convert::ToInt32(textBox1->Text); // Значение звена
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countI)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchI.push_index(value,index);
							countI++; // Увиличить количество узлов на 1-цу
							
							// Вывод
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // Вещественные числа
						{
							
							double value;
							int index;
							try
							{
								value = Convert::ToDouble(textBox1->Text); // Значение звена
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countI)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchD.push_index(value,index);
							countD++; // Увиличить количество узлов на 1-цу
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // Символьный тип
						{
							
							int index;
							char value = textBox1->Text[0];
							try
							{
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countC)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchC.push_index(value,index);
							countC++; // Увиличить количество узлов на 1-цу
							
							char *A = new char [countC];
							branchC.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countC; i++)
							{
								std::string str = "";
								str = A[i];
								richTextBox2->Text += gcnew System::String(str.c_str())+"\n";
							}
								
						}
						else if(comboBox2->SelectedIndex == 3)
						{
							System::String^ s = textBox1->Text;
							msclr::interop::marshal_context context;
							int index;
							std::string value = context.marshal_as<std::string>(s);
							try
							{
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countS)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchS.push_index(value,index);
							countS++; // Увиличить количество узлов на 1-цу
							
							std::string *A = new std::string [countS];
							branchS.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(A[i].c_str())+"\n";
							}
										
						}
						else
						{
							MessageBox::Show("Выберите тип");
							return;
						}
						break;
					case 4: // Удаление звена из произвольного места списка
						if (comboBox2->SelectedIndex == 0) // Целое числа
						{
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countI)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchI.pull_index(index);
							countI--; // Уменьшить количество узлов на 1-цу
							
							// Вывод
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // Вещественные числа
						{
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countD)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchD.pull_index(index);
							countD--; // Увиличить количество узлов на 1-цу
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // Символьный тип
						{
							
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countC)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchC.pull_index(index);
							countC--; // Увиличить количество узлов на 1-цу
							
							char *A = new char [countC];
							branchC.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countC; i++)
							{
								std::string str = "";
								str = A[i];
								richTextBox2->Text += gcnew System::String(str.c_str())+"\n";
							}
								
						}
						else if(comboBox2->SelectedIndex == 3) // Строковый тип
						{
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // Значение индекса
							}
							catch(...)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							if (index < 2 || index > countS)
							{
								MessageBox::Show("Ошибка ввода");
								return;
							}
							branchS.pull_index(index);
							countS--; // Увиличить количество узлов на 1-цу
							
							std::string *A = new std::string [countS];
							branchS.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(A[i].c_str())+"\n";
							}		
						}
						else
						{
							MessageBox::Show("Выберите тип");
							return;
						}
						break;
					case 5: // Проверка, пуст ли список
						switch (comboBox2->SelectedIndex)
						{	
							case 0: // Целый
								if (!branchI.is_empty()) flag=true;
								break;
							case 1: // Вещественный
								if (!branchD.is_empty()) flag=true;
								break;
							case 2: // Символьный
								if (!branchC.is_empty()) flag=true;
								break;
							case 3: // Строковый
								if (!branchS.is_empty()) flag=true;
								break;
							default:
								MessageBox::Show("Выберите тип");
								return;
						}
						if (flag)
								MessageBox::Show("Список есть");
							else MessageBox::Show("Списка нет");
						break;
					case 6: // Очистка списка
						if (comboBox2->SelectedIndex == 0) // Целое числа
						{
							branchI.clear_list();
							countI = 0;
							
							// Вывод
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // Вещественные числа
						{
							branchD.clear_list();
							countD = 0;
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // Символьный тип
						{
							branchC.clear_list();
							countC = 0;
							
							char *A = new char [countC];
							branchC.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countC; i++)
							{
								std::string str = "";
								str = A[i];
								richTextBox2->Text += gcnew System::String(str.c_str())+"\n";
							}
								
						}
						else if(comboBox2->SelectedIndex == 3)
						{
							branchS.clear_list();
							countS = 0;
							
							std::string *A = new std::string [countS];
							branchS.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(A[i].c_str())+"\n";
							}
						}
						else
						{
							MessageBox::Show("Выберите тип");
							return;
						}
						break;
				}
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 switch (comboBox1->SelectedIndex)
				 {
					case 0: // Формирование списка
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
					case 1: // Добавдение звена в начало списка
						textBox1->ReadOnly = false;
						textBox2->ReadOnly = true;
						break;
					case 2: // Удаление звена из начало списка
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
					case 3: // Добавление звена в произвольное место списка
						textBox1->ReadOnly = false;
						textBox2->ReadOnly = false;
						break;
					case 4: // Удаление звена из произвольного места списка
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = false;
						break;
					case 5: // Проверка, пуст ли список
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
					case 6: // Очистка списка
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();		 
		 }
};
}

