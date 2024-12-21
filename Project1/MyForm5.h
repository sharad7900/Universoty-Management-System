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
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(478, 648);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 33);
			this->button2->TabIndex = 58;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(213, 648);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 33);
			this->button1->TabIndex = 57;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(439, 517);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(72, 24);
			this->radioButton3->TabIndex = 51;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Other";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(314, 517);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(86, 24);
			this->radioButton2->TabIndex = 50;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(219, 517);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 24);
			this->radioButton1->TabIndex = 49;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"B.Tech", L"B.Pharma", L"B.Arch", L"BCA", L"B.Com" });
			this->comboBox4->Location = System::Drawing::Point(849, 323);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(348, 28);
			this->comboBox4->TabIndex = 54;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm5::comboBox4_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(849, 427);
			this->textBox6->MaxLength = 350;
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(348, 132);
			this->textBox6->TabIndex = 56;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Computer Science", L"Computer Science(Data Science)",
					L"Computer Science(AIML)", L"Mechanical", L"Civil"
			});
			this->comboBox3->Location = System::Drawing::Point(849, 372);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(348, 28);
			this->comboBox3->TabIndex = 55;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"General", L"OBC", L"SC", L"ST", L"Other" });
			this->comboBox1->Location = System::Drawing::Point(849, 274);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(348, 28);
			this->comboBox1->TabIndex = 53;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(219, 469);
			this->textBox5->MaxLength = 100;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(398, 26);
			this->textBox5->TabIndex = 48;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(849, 227);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(348, 26);
			this->dateTimePicker1->TabIndex = 52;
			this->dateTimePicker1->Value = System::DateTime(2024, 10, 14, 20, 10, 0, 0);
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(219, 424);
			this->textBox4->MaxLength = 10;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(248, 26);
			this->textBox4->TabIndex = 47;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(219, 375);
			this->textBox3->MaxLength = 40;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(398, 26);
			this->textBox3->TabIndex = 46;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(219, 323);
			this->textBox2->MaxLength = 40;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(398, 26);
			this->textBox2->TabIndex = 45;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(219, 274);
			this->textBox1->MaxLength = 40;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(398, 26);
			this->textBox1->TabIndex = 44;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(175, 4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(916, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(705, 278);
			this->label13->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 24);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Category";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(49, 377);
			this->label12->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(151, 24);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Mother\'s Name";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(705, 427);
			this->label11->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 24);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Address";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(705, 376);
			this->label10->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 24);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Branch";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(705, 327);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 24);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Course";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(49, 471);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 24);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Email ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(49, 427);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 24);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Mobile No.";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(705, 229);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 24);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Date Of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 516);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 24);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Gender";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 327);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 24);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Father\'s Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 278);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 24);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 229);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 24);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Registration No:";
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(219, 227);
			this->textBox7->MaxLength = 15;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 26);
			this->textBox7->TabIndex = 59;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox7_KeyPress);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Cyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(439, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 33);
			this->button3->TabIndex = 60;
			this->button3->Text = L"Find";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1253, 703);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Update Student";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "");
		sql::ResultSet* result;
		sql::PreparedStatement* p;

	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			con->setSchema("newschema");
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
		}
		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
		comboBox4->DropDownStyle = ComboBoxStyle::DropDownList;
		comboBox3->DropDownStyle = ComboBoxStyle::DropDownList;

	}

	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		con->setSchema("newschema");
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
	}

	string id = msclr::interop::marshal_as<string>(textBox7->Text);

	try {

	p = con->prepareStatement("SELECT * FROM student JOIN fees ON student.id=fees.id WHERE student.id =" + id + " and fees.fees<50000;");
	result = p->executeQuery();
	result->next();

	textBox1->Text = gcnew String(result->getString(2).c_str());
	textBox2->Text = gcnew String(result->getString(3).c_str());
	textBox3->Text = gcnew String(result->getString(4).c_str());
	textBox4->Text = gcnew String(result->getString(5).c_str());
	textBox5->Text = gcnew String(result->getString(6).c_str());

	if ((string)result->getString(7).c_str() == "Male")
	{
		radioButton1->Checked = true;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
	}
	else if ((string)result->getString(7).c_str() == "Female")
	{
		radioButton1->Checked = false;
		radioButton2->Checked = true;
		radioButton3->Checked = false;
	}
	else if ((string)result->getString(7).c_str() == "Other")
	{
		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = true;
	}

	dateTimePicker1->Text = gcnew String(result->getString(8).c_str());
	comboBox1->Text = gcnew String(result->getString(9).c_str());
	comboBox4->Text = gcnew String(result->getString(11).c_str());
	comboBox3->Text = gcnew String(result->getString(12).c_str());
	textBox6->Text = gcnew String(result->getString(13).c_str());
	}
	catch (sql::SQLException e) {
		MessageBox::Show("Not found", "Information", MessageBoxButtons::OK);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;

	comboBox1->Text = "Select";
	comboBox3->Text = "Select";
	comboBox4->Text = "Select";
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	string name = msclr::interop::marshal_as<string>(textBox1->Text);
	string fname = msclr::interop::marshal_as<string>(textBox2->Text);
	string mname = msclr::interop::marshal_as<string>(textBox3->Text);
	string mobile = msclr::interop::marshal_as<string>(textBox4->Text);
	string email = msclr::interop::marshal_as<string>(textBox5->Text);
	string dob = msclr::interop::marshal_as<string>(dateTimePicker1->Text);
	string gen;
	String^ pattern = "^[a-zA-Z0-9._%+-]+@gmail\.com$";
	String^ Email = textBox5->Text;
	System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex(pattern);
	bool male = radioButton1->Checked;
	bool female = radioButton2->Checked;
	bool other = radioButton3->Checked;

	if (male) gen = "Male";
	else if (female) gen = "Female";
	else if (other) gen = "Other";
	else gen = "";

	string cat = msclr::interop::marshal_as<string>(comboBox1->Text);
	string course = msclr::interop::marshal_as<string>(comboBox4->Text);
	string branch = msclr::interop::marshal_as<string>(comboBox3->Text);
	string sem = "1";
	string add = msclr::interop::marshal_as<string>(textBox6->Text);

	if (name == "" || fname == "" || mname == "" || mobile == "" || email == "" || gen == "" || dob == "" || cat == "" || course == "" || add == "" || course == "Select" || sem == "Select" || cat == "Select" || branch == "" || branch == "Select")
	{
		MessageBox::Show("Please Fill Info", "Error", MessageBoxButtons::OK);
	}
	else if (!(regex->IsMatch(Email))) {
		MessageBox::Show("Invalid Email ID", "Error", MessageBoxButtons::OK);
	}
	else if (mobile.length() != 10 || mobile[0] == '1' || mobile[0] == '2' || mobile[0] == '3' || mobile[0] == '4' || mobile[0] == '5' || mobile[0] == '0') {
		MessageBox::Show("Invalid Mobile Number", "Error", MessageBoxButtons::OK);
	}
	else {
		try
		{
			string id = msclr::interop::marshal_as<string>(textBox7->Text);
			p = con->prepareStatement("UPDATE student SET naam = ?,fname = ?,mname = ?,mobile = ?,email = ?,gen = ?,dob = ?,cat = ?,sem = ?,cource = ?,branch = ?,address = ? WHERE id = " + id + ";");

			p->setString(1, name);
			p->setString(2, fname);
			p->setString(3, mname);
			p->setString(4, mobile);
			p->setString(5, email);
			p->setString(6, gen);
			p->setString(7, dob);
			p->setString(8, cat);
			p->setString(9, sem);
			p->setString(10, course);
			p->setString(11, branch);
			p->setString(12, add);

			p->executeQuery();
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			radioButton3->Checked = false;

			comboBox1->Text = "Select";
			comboBox3->Text = "Select";
			comboBox4->Text = "Select";
			p = con->prepareStatement("SELECT id FROM student ORDER BY id DESC LIMIT 1;");
			result = p->executeQuery();
			result->next();
			MessageBox::Show("Success", "Information", MessageBoxButtons::OK);
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Worng Credentials", "Information", MessageBoxButtons::OK);
		}
	}
}
private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	string selection = msclr::interop::marshal_as<string>(comboBox4->Text);

	if (selection != "B.Tech") {
		comboBox3->Items->Clear();
		comboBox3->Items->Add(comboBox4->Text);
	}
	else {
		comboBox3->Items->Clear();
		comboBox3->Items->Add("Computer Science");
		comboBox3->Items->Add("Computer Science (Data Science)");
		comboBox3->Items->Add("Computer Science (AIML)");
		comboBox3->Items->Add("Mechanical");
		comboBox3->Items->Add("Civil");
	}
}
};
}