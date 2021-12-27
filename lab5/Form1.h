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
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
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
			this->button1->Text = L"��������� ��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"������������ ������", L"���������� ����� � ������ ������", 
				L"�������� ����� �� ������ ������", L"���������� ����� � ������������ ����� ������", L"�������� ����� �� ������������� ����� ������", 
				L"��������, ���� �� ������", L"������� ������"});
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
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"�����", L"������������", L"���������� ", L"���������"});
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
			this->label1->Text = L"��� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(414, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"������� �������� �����";
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
			this->label3->Text = L"������� �����  ����� � ������ ���� ����� ��������";
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
			this->button2->Text = L"�����";
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
			this->label4->Text = L"�������� ��������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(141, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"������� ������";
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
			this->Text = L"����������� ������";
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
					case 0: // ������������ ������
						if (comboBox2->SelectedIndex == 0) // ����� �����
						{
							countI = richTextBox1->Lines->Length;
							int *A = new int [countI]; // ������ ����� �����
							try {
								for (int i = 0; i<countI; i++)
									A[i] = std::stoi(stringArr[i].c_str()); // ������ � ������ 
							}
							catch(...) // ������ �����
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchI.list_create(A,countI); // ������������ ������ ������ ����
							richTextBox2->Text = "";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // ������������ �����
						{
							countD = richTextBox1->Lines->Length;
							double *A = new double [countD]; // ������ ������������ �����
							try {
								for (int i = 0; i<countD; i++)
									A[i] = std::stof(stringArr[i].c_str()); // ������ � ������ 
							}
							catch(...) // ������ �����
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchD.list_create(A,countD); // ������������ ������ ������������� ����
							richTextBox2->Text = "";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // ���������� ���
						{
								countC = richTextBox1->Lines->Length;
								char *A = new char [countC];
								for (int i = 0; i<countC; i++)
									A[i] = richTextBox1->Lines[i][0];	
								branchC.list_create(A,countC); // ������������ ������ ����������� ����
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
							branchS.list_create(stringArr,countS); // ������������ ������ ���������� ����
							richTextBox2->Text = "";
							for (int i = 0; i<countS; i++)
							{
								richTextBox2->Text += gcnew System::String(stringArr[i].c_str())+"\n";
							}
						}
						else
						{
							MessageBox::Show("�������� ���");
							return;
						}
						break;
					case 1: // ���������� ����� � ������ ������
						if (comboBox2->SelectedIndex == 0) // ����� �����
						{
							int value;
							try
							{
								value = Convert::ToInt32(textBox1->Text); // �������� �����
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchI.push_first(value);
							countI+=1; // ��������� ���������� ����� �� 1-��
							
							// �����
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // ������������ �����
						{
							double value;
							try
							{
								value = Convert::ToDouble(textBox1->Text); // �������� �����
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchD.push_first(value);
							countD++; // ��������� ���������� ����� �� 1-��
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // ���������� ���
						{
							branchC.push_first(textBox1->Text[0]);
							countC++; // ��������� ���������� ����� �� 1-��
							
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
							countS++; // ��������� ���������� ����� �� 1-��
							
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
							MessageBox::Show("�������� ���");
							return;
						}
						break;
					case 2: // �������� ����� �� ������ ������
						if (comboBox2->SelectedIndex == 0) // ����� �����
						{
							branchI.pull_first();
							countI--; // ��������� ���������� ����� �� 1-��
							
							// �����
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // ������������ �����
						{
							branchD.pull_first();
							countD--; // ��������� ���������� ����� �� 1-��
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // ���������� ���
						{
							branchC.pull_first();
							countC--; // ��������� ���������� ����� �� 1-��
							
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
							countS--; // ��������� ���������� ����� �� 1-��
							
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
							MessageBox::Show("�������� ���");
							return;
						}

						break;
					case 3: // ���������� ����� � ������������ ����� ������
						if (comboBox2->SelectedIndex == 0) // ����� �����
						{
							int value;
							int index;
							try
							{
								value = Convert::ToInt32(textBox1->Text); // �������� �����
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countI)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchI.push_index(value,index);
							countI++; // ��������� ���������� ����� �� 1-��
							
							// �����
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // ������������ �����
						{
							
							double value;
							int index;
							try
							{
								value = Convert::ToDouble(textBox1->Text); // �������� �����
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countI)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchD.push_index(value,index);
							countD++; // ��������� ���������� ����� �� 1-��
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // ���������� ���
						{
							
							int index;
							char value = textBox1->Text[0];
							try
							{
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countC)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchC.push_index(value,index);
							countC++; // ��������� ���������� ����� �� 1-��
							
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
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countS)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchS.push_index(value,index);
							countS++; // ��������� ���������� ����� �� 1-��
							
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
							MessageBox::Show("�������� ���");
							return;
						}
						break;
					case 4: // �������� ����� �� ������������� ����� ������
						if (comboBox2->SelectedIndex == 0) // ����� �����
						{
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countI)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchI.pull_index(index);
							countI--; // ��������� ���������� ����� �� 1-��
							
							// �����
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // ������������ �����
						{
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countD)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchD.pull_index(index);
							countD--; // ��������� ���������� ����� �� 1-��
							
							double *A = new double [countD];
							branchD.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countD; i++)
							{
								richTextBox2->Text += Convert::ToDouble(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 2) // ���������� ���
						{
							
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countC)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchC.pull_index(index);
							countC--; // ��������� ���������� ����� �� 1-��
							
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
						else if(comboBox2->SelectedIndex == 3) // ��������� ���
						{
							int index;
							try
							{
								index = Convert::ToInt32(textBox2->Text); // �������� �������
							}
							catch(...)
							{
								MessageBox::Show("������ �����");
								return;
							}
							if (index < 2 || index > countS)
							{
								MessageBox::Show("������ �����");
								return;
							}
							branchS.pull_index(index);
							countS--; // ��������� ���������� ����� �� 1-��
							
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
							MessageBox::Show("�������� ���");
							return;
						}
						break;
					case 5: // ��������, ���� �� ������
						switch (comboBox2->SelectedIndex)
						{	
							case 0: // �����
								if (!branchI.is_empty()) flag=true;
								break;
							case 1: // ������������
								if (!branchD.is_empty()) flag=true;
								break;
							case 2: // ����������
								if (!branchC.is_empty()) flag=true;
								break;
							case 3: // ���������
								if (!branchS.is_empty()) flag=true;
								break;
							default:
								MessageBox::Show("�������� ���");
								return;
						}
						if (flag)
								MessageBox::Show("������ ����");
							else MessageBox::Show("������ ���");
						break;
					case 6: // ������� ������
						if (comboBox2->SelectedIndex == 0) // ����� �����
						{
							branchI.clear_list();
							countI = 0;
							
							// �����
							int *A = new int [countI];
							branchI.print(A);
							richTextBox2->Text="";
							for (int i = 0; i<countI; i++)
							{
								richTextBox2->Text += Convert::ToString(A[i])+"\n";
							}
						}
						else if (comboBox2->SelectedIndex == 1) // ������������ �����
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
						else if (comboBox2->SelectedIndex == 2) // ���������� ���
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
							MessageBox::Show("�������� ���");
							return;
						}
						break;
				}
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 switch (comboBox1->SelectedIndex)
				 {
					case 0: // ������������ ������
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
					case 1: // ���������� ����� � ������ ������
						textBox1->ReadOnly = false;
						textBox2->ReadOnly = true;
						break;
					case 2: // �������� ����� �� ������ ������
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
					case 3: // ���������� ����� � ������������ ����� ������
						textBox1->ReadOnly = false;
						textBox2->ReadOnly = false;
						break;
					case 4: // �������� ����� �� ������������� ����� ������
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = false;
						break;
					case 5: // ��������, ���� �� ������
						textBox1->ReadOnly = true;
						textBox2->ReadOnly = true;
						break;
					case 6: // ������� ������
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

