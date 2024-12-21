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

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace std;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		MyForm15(void)
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
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm15::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(449, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(683, 157);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"SELECT" });
			this->comboBox1->Location = System::Drawing::Point(52, 461);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(337, 28);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"SELECT";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(324, 242);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(337, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm15::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(720, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm15::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 242);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Registration Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Select Subject";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(459, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Marks";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(444, 463);
			this->textBox2->MaxLength = 3;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(102, 26);
			this->textBox2->TabIndex = 7;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm15::textBox2_KeyPress);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(590, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 38);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Done";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm15::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(1031, 439);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(468, 293);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Subject ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Subject Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 175;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Marks";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Orange;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(52, 681);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 38);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Evaluate";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm15::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(444, 681);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 38);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm15::button4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(48, 581);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 24);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Percentage : ";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(189, 581);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"100";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(416, 582);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Passed";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(326, 582);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Status : ";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(416, 582);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Faild";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Fuchsia;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(712, 456);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 38);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm15::button5_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(1027, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Name : ";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(1015, 316);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 24);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Course : ";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(1116, 245);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 24);
			this->label11->TabIndex = 21;
			this->label11->Text = L"_____________";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(1116, 316);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(153, 24);
			this->label12->TabIndex = 22;
			this->label12->Text = L"_____________";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(1116, 383);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 24);
			this->label13->TabIndex = 24;
			this->label13->Text = L"_____________";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(1000, 383);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 24);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Semester :";
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1511, 744);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm15";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Result";
			this->Load += gcnew System::EventHandler(this, &MyForm15::MyForm15_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "");
		sql::ResultSet* result;
		sql::PreparedStatement* p;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
		try {
			con->setSchema("newschema");

		}
		catch (sql::SQLException e) {
			MessageBox::Show("Database Erorr", "Notification", MessageBoxButtons::OK);
		}

		textBox2->Text = "";
		comboBox1->Items->Clear();
		comboBox1->Text = "SELECT";
		this->dataGridView1->Rows->Clear();
		label7->Visible = false;
		label6->Visible = false;
		label9->Visible = false;

		string id = msclr::interop::marshal_as<string>(textBox1->Text);

		p = con->prepareStatement("SELECT Subjects.SubjectName FROM Subjects JOIN Enrollment ON Enrollment.SubjectID=Subjects.SubjectID JOIN student ON student.id = Enrollment.StudentID WHERE student.id = " + id + ";");
		result = p->executeQuery();
		comboBox1->Items->Clear();
		int i = 0;
		while (result->next()) {
			i++;
			comboBox1->Items->Add(gcnew String(result->getString(1).c_str()));
		}
		comboBox1->Text = "Select";
		if (i == 0) {
			comboBox1->Items->Clear();
			comboBox1->Text = "SELECT";
			label11->Text = "_____________";
			label12->Text = "_____________";
			label13->Text = "_____________";
			MessageBox::Show("Not Found", "Notification", MessageBoxButtons::OK);
		}
		else {

			p = con->prepareStatement("SELECT Marks.SubjectID,SubjectName,marks FROM Marks JOIN Subjects ON Subjects.SubjectID = Marks.SubjectID where Marks.SudentID = " + id + "; ");
			result = p->executeQuery();
			this->dataGridView1->Rows->Clear();
			while (result->next()) {
				int rowIndex = this->dataGridView1->Rows->Add();
				for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
					this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
				}
			}
			try {
				p = con->prepareStatement("SELECT naam,cource,sem FROM student WHERE id = " + id + ";");
				result = p->executeQuery();
				result->next();
				label11->Text = gcnew String(result->getString(1).c_str());
				label12->Text = gcnew String(result->getString(2).c_str());
				label13->Text = gcnew String(result->getString(3).c_str());
			}
			catch (sql::SQLException e) {
				MessageBox::Show("Not found", "Notification", MessageBoxButtons::OK);
			}
			
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		con->setSchema("newschema");
	}
	catch (sql::SQLException e) {
		MessageBox::Show("Database Error", "Notification", MessageBoxButtons::OK);
	}

	string id = msclr::interop::marshal_as<string>(textBox1->Text);
	string subject = msclr::interop::marshal_as<string>(comboBox1->Text);
	if (subject == "Select") {
		MessageBox::Show("Choose a subject", "Notification", MessageBoxButtons::OK);
	}
	else {

		p = con->prepareStatement("SELECT SubjectID FROM Subjects WHERE SubjectName = ?;");
		p->setString(1, subject);
		result = p->executeQuery();
		result->next();
		string subid = result->getString(1).c_str();
		try {

			p = con->prepareStatement("SELECT marks FROM Marks WHERE SudentID = " + id + " and SubjectID = " + subid + ";");
			result = p->executeQuery();
			result->next();
			int marks = result->getInt(1);
			MessageBox::Show("Already Submitted", "Notification", MessageBoxButtons::OK);
		}
		catch (sql::SQLException e) {
			int score = stoi(msclr::interop::marshal_as<string>(textBox2->Text));
			if (score < 0 || score>100) {
				MessageBox::Show("Wrong Input", "Notification", MessageBoxButtons::OK);
			}
			else {

			int ID = stoi(id);
			int SUBID = stoi(subid);
			p = con->prepareStatement("INSERT INTO Marks (SudentID,SubjectID,marks) VALUES (?,?,?);");
			p->setInt(1, ID);
			p->setInt(2, SUBID);
			p->setInt(3, score);

			p->executeQuery();
			MessageBox::Show("Successfull", "Notification", MessageBoxButtons::OK);
			}
		}
	}

	p = con->prepareStatement("SELECT Marks.SubjectID,SubjectName,marks FROM Marks JOIN Subjects ON Subjects.SubjectID = Marks.SubjectID WHERE SudentID = " + id + "; ");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}

}


private: System::Void MyForm15_Load(System::Object^ sender, System::EventArgs^ e) {

	label7->Visible = false;
	label6->Visible = false;
	label9->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int count = comboBox1->Items->Count;
	string id = msclr::interop::marshal_as<string>(textBox1->Text);

	p = con->prepareStatement("SELECT SUM(marks) FROM Marks WHERE SudentID = " + id + "; ");
	result = p->executeQuery();
	result->next();

	int sum = result->getInt(1);
	float per = (float)sum / (float)count;
	
	label6->Text = String::Format(L"{0}", per);
	label6->Visible = true;
	if (per >= 33.00) {
		label7->Visible = true;
		label9->Visible = false;
	}
	else {
		label9->Visible = true;
		label7->Visible = false;

	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	textBox1->Text = "";
	textBox2->Text = "";
	comboBox1->Items->Clear();
	comboBox1->Text = "SELECT";
	this->dataGridView1->Rows->Clear();
	label7->Visible = false;
	label6->Visible = false;
	label9->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	string id = msclr::interop::marshal_as<string>(textBox1->Text);
	int ID = stoi(id);
	int marks = stoi(msclr::interop::marshal_as<string>(textBox2->Text));

	if (marks < 0 && marks>100) {
		MessageBox::Show("Wrong Input", "Notification", MessageBoxButtons::OK);
	}
	else {
		try {

		string subject = msclr::interop::marshal_as<string>(comboBox1->Text);
		p = con->prepareStatement("SELECT SubjectID FROM Subjects WHERE SubjectName = ?;");
		p->setString(1, subject);
		result = p->executeQuery();
		result->next();
		string subid = result->getString(1).c_str();
		int temp = stoi(subid);
		p = con->prepareStatement("UPDATE Marks SET marks = ? WHERE SubjectID = ? AND SudentID = ?;");
		p->setInt(1, marks);
		p->setInt(2, temp);
		p->setInt(3, ID);
		p->executeQuery();
		MessageBox::Show("Successfull", "Notification", MessageBoxButtons::OK);
		p = con->prepareStatement("SELECT Marks.SubjectID,SubjectName,marks FROM Marks JOIN Subjects ON Subjects.SubjectID = Marks.SubjectID WHERE SudentID = " + id + "; ");
		result = p->executeQuery();
		this->dataGridView1->Rows->Clear();
		while (result->next()) {
			int rowIndex = this->dataGridView1->Rows->Add();
			for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
				this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
			}
		}
		}
		catch (sql::SQLException e) {
			MessageBox::Show("Not record found", "Notification", MessageBoxButtons::OK);
		}
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}

};
}
