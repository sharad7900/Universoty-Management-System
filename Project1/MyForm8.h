#pragma once

#include <cppconn/driver.h> 
#include <cppconn/exception.h> 
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <string>
#include <iostream> 
#include <mysql_connection.h> 
#include <mysql_driver.h>
#include <stdlib.h>
#include "mysql_connection.h"
#include<Windows.h>
#include<msclr/marshal_cppstd.h>

namespace Project1 {
	using namespace std;
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox11;
	protected:
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm8::typeid));
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(927, 263);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(333, 26);
			this->textBox11->TabIndex = 68;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(679, 265);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(202, 24);
			this->label15->TabIndex = 67;
			this->label15->Text = L"Highest Qualification";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Aadhar", L"Pan", L"Voter ID" });
			this->comboBox1->Location = System::Drawing::Point(927, 309);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(333, 28);
			this->comboBox1->TabIndex = 66;
			this->comboBox1->Text = L"Select";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm8::comboBox1_SelectedIndexChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(483, 456);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(72, 24);
			this->radioButton3->TabIndex = 65;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Other";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(343, 455);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(86, 24);
			this->radioButton2->TabIndex = 64;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(222, 455);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 24);
			this->radioButton1->TabIndex = 63;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker3->Location = System::Drawing::Point(927, 649);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(333, 26);
			this->dateTimePicker3->TabIndex = 62;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(222, 309);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(333, 26);
			this->dateTimePicker1->TabIndex = 61;
			this->dateTimePicker1->Value = System::DateTime(2024, 10, 22, 18, 29, 14, 0);
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(927, 601);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(333, 26);
			this->textBox10->TabIndex = 60;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(927, 552);
			this->textBox9->MaxLength = 8;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(333, 26);
			this->textBox9->TabIndex = 59;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm8::textBox9_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(927, 499);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(333, 26);
			this->textBox8->TabIndex = 58;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(927, 453);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(333, 26);
			this->textBox7->TabIndex = 57;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(927, 407);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(333, 26);
			this->textBox6->TabIndex = 56;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(927, 357);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(333, 26);
			this->textBox5->TabIndex = 55;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm8::textBox5_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(222, 509);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(333, 166);
			this->textBox4->TabIndex = 54;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(222, 407);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(333, 26);
			this->textBox3->TabIndex = 53;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(222, 357);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(333, 26);
			this->textBox2->TabIndex = 52;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm8::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(222, 263);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(333, 26);
			this->textBox1->TabIndex = 51;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(801, 601);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 24);
			this->label14->TabIndex = 50;
			this->label14->Text = L"Subject";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(728, 651);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 24);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Date Of Joining";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(90, 511);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 24);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Address";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(814, 552);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 24);
			this->label11->TabIndex = 47;
			this->label11->Text = L"Salary";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(764, 499);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 24);
			this->label10->TabIndex = 46;
			this->label10->Text = L"Department";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(763, 403);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 24);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Experience";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(823, 453);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 24);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Skills";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(97, 455);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 24);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Gender";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(695, 355);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 24);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Document Number";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(776, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 24);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Document";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(90, 403);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 24);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Email ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(104, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Mobile";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 24);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Date Of Birth";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(112, 259);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 24);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(81, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 69;
			this->pictureBox1->TabStop = false;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(631, 98);
			this->textBox12->MaxLength = 15;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(324, 26);
			this->textBox12->TabIndex = 70;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm8::textBox12_KeyPress);
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(385, 99);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(227, 25);
			this->label16->TabIndex = 71;
			this->label16->Text = L"Registration Number";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(992, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 36);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm8::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(494, 748);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 39);
			this->button2->TabIndex = 73;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm8::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(713, 748);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 39);
			this->button3->TabIndex = 74;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm8::button3_Click);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1326, 816);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Update Faculty";
			this->Load += gcnew System::EventHandler(this, &MyForm8::MyForm8_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "");
		sql::ResultSet* result;
		sql::PreparedStatement* p;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			con->setSchema("newschema");
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
		}

		string id = msclr::interop::marshal_as<string>(textBox12->Text);


		try {


		p = con->prepareStatement("SELECT * FROM faculty WHERE id = " + id + "");
		result = p->executeQuery();
		result->next();
		textBox1->Text = gcnew String(result->getString(2).c_str());
		dateTimePicker1->Text = gcnew String(result->getString(3).c_str());
		textBox2->Text = gcnew String(result->getString(4).c_str());
		textBox3->Text = gcnew String(result->getString(5).c_str());
		if ((string)result->getString(6).c_str() == "Male")
		{
			radioButton1->Checked = true;
			radioButton2->Checked = false;
			radioButton3->Checked = false;
		}
		else if ((string)result->getString(6).c_str() == "Female")
		{
			radioButton1->Checked = false;
			radioButton2->Checked = true;
			radioButton3->Checked = false;
		}
		else if ((string)result->getString(6).c_str() == "Other")
		{
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			radioButton3->Checked = true;
		}
		textBox4->Text = gcnew String(result->getString(7).c_str());
		textBox11->Text = gcnew String(result->getString(8).c_str());
		comboBox1->Text = gcnew String(result->getString(9).c_str());
		textBox5->Text = gcnew String(result->getString(10).c_str());
		textBox6->Text = gcnew String(result->getString(11).c_str());
		textBox7->Text = gcnew String(result->getString(12).c_str());
		textBox8->Text = gcnew String(result->getString(13).c_str());
		textBox9->Text = gcnew String(result->getString(14).c_str());
		textBox10->Text = gcnew String(result->getString(15).c_str());
		dateTimePicker3->Text = gcnew String(result->getString(16).c_str());
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Not Found", "Notification", MessageBoxButtons::OK);
		}


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		con->setSchema("newschema");
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
	}

	string id = msclr::interop::marshal_as<string>(textBox12->Text);

	string name = msclr::interop::marshal_as<string>(textBox1->Text);
	string dob = msclr::interop::marshal_as<string>(dateTimePicker1->Text);
	string mob = msclr::interop::marshal_as<string>(textBox2->Text);
	string email = msclr::interop::marshal_as<string>(textBox3->Text);
	String^ pattern = "^[a-zA-Z0-9._%+-]+@gmail\.com$";
	String^ Email = textBox3->Text;
	System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex(pattern);
	string gen = "";
	if (radioButton1->Checked) {
		gen = "Male";
	}
	else if (radioButton2->Checked) {
		gen = "Female";
	}
	else if (radioButton3->Checked) {
		gen = "Other";
	}
	string add = msclr::interop::marshal_as<string>(textBox4->Text);
	string quali = msclr::interop::marshal_as<string>(textBox11->Text);
	string doc = msclr::interop::marshal_as<string>(comboBox1->Text);
	string docnum = msclr::interop::marshal_as<string>(textBox5->Text);
	string exp = msclr::interop::marshal_as<string>(textBox6->Text);
	string skill = msclr::interop::marshal_as<string>(textBox7->Text);
	string depa = msclr::interop::marshal_as<string>(textBox8->Text);
	string salary = msclr::interop::marshal_as<string>(textBox9->Text);
	string sub = msclr::interop::marshal_as<string>(textBox10->Text);
	string doj = msclr::interop::marshal_as<string>(dateTimePicker3->Text);
	String^ pattern2 = "^[A-Z]{5}[0-9]{4}[A-Z]{1}$";
	System::Text::RegularExpressions::Regex^ regex2 = gcnew System::Text::RegularExpressions::Regex(pattern2);
	String^ pattern3 = "^[A-Z]{1}\d{3}[A-Z]{1}\d{4}[A-Z]{1}$";
	System::Text::RegularExpressions::Regex^ regex3 = gcnew System::Text::RegularExpressions::Regex(pattern3);


	if (name == "" || dob == "" || email == "" || gen == "" || add == "" || quali == "" || doc == "" || docnum == "" || exp == "" || skill == "" || depa == "" || salary == "" || sub == "" || doj == "" || mob.length() != 10 || doc == "Select") {
		MessageBox::Show("Wrong Input", "Information", MessageBoxButtons::OK);
	}
	else if (mob.length() != 10 || mob[0] == '1' || mob[0] == '2' || mob[0] == '3' || mob[0] == '4' || mob[0] == '5' || mob[0] == '0') {
		MessageBox::Show("Invalid Mobile Number", "Error", MessageBoxButtons::OK);
	}
	else if (!(regex->IsMatch(Email))) {
		MessageBox::Show("Invalid Email ID", "Error", MessageBoxButtons::OK);
	}
	else if (doc == "Pan" && !(regex2->IsMatch(textBox5->Text))) {
		MessageBox::Show("Invalid Document Number", "Error", MessageBoxButtons::OK);
	}
	else if (doc == "Voter ID" && !(regex3->IsMatch(textBox5->Text))) {
		MessageBox::Show("Invalid Document Number", "Error", MessageBoxButtons::OK);
	}
	else {
		try {

			p = con->prepareStatement("UPDATE faculty SET naam = ?,dob = ?,mob = ?,mail = ?,gen = ?,address = ?,quali = ?,doc = ?,docnum = ?,exp = ?,skill = ?,depa = ?,salary = ?,sub = ?,doj = ? WHERE id = "+id+";");
			p->setString(1, name);
			p->setString(2, dob);
			p->setString(3, mob);
			p->setString(4, email);
			p->setString(5, gen);
			p->setString(6, add);
			p->setString(7, quali);
			p->setString(8, doc);
			p->setString(9, docnum);
			p->setString(10, exp);
			p->setString(11, skill);
			p->setString(12, depa);
			p->setString(13, salary);
			p->setString(14, sub);
			p->setString(15, doj);
			p->executeQuery();
			MessageBox::Show("Success", "Status", MessageBoxButtons::OK);

			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
			textBox8->Text = "";
			textBox9->Text = "";
			textBox10->Text = "";
			textBox11->Text = "";
			dateTimePicker1->Text = "";
			dateTimePicker3->Text = "";
			comboBox1->Text = "Select";
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			radioButton3->Checked = false;
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Invalid Details", "Status", MessageBoxButtons::OK);
		}
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	textBox10->Text = "";
	textBox11->Text = "";
	dateTimePicker1->Text = "";
	dateTimePicker3->Text = "";
	comboBox1->Text = "Select";
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	textBox12->Text = "";
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}

}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	String^ selection = comboBox1->Text;
	if (selection->ToString() == "Aadhar") {
		textBox5->MaxLength = 12;
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
		{
			e->Handled = true;
		}
	}
	else if (selection->ToString() == "Pan") {
		textBox5->MaxLength = 10;
	}
	else if (selection->ToString() == "Voter ID") {
		textBox5->MaxLength = 10;

	}
}
private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
private: System::Void MyForm8_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "";
}
};
}
