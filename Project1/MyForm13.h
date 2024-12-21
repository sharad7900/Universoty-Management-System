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
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
	public:
		MyForm13(void)
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
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(469, 9);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(100, 50, 100, 50);
			this->label1->Size = System::Drawing::Size(459, 169);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enrollment";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(720, 382);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Subject Credit";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(719, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Subject Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(225, 382);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Course";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(237, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(204, 508);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Semester";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(226, 447);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 24);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Branch";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(329, 230);
			this->textBox7->MaxLength = 15;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(209, 29);
			this->textBox7->TabIndex = 18;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm13::textBox7_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(152, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 29);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Roll Number";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(577, 228);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 35);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Verify";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1131, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 35);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Verify";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::button2_Click);
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(896, 230);
			this->textBox8->MaxLength = 15;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(209, 29);
			this->textBox8->TabIndex = 21;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm13::textBox8_KeyPress);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(722, 230);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 29);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Subject ID";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(897, 497);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 35);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Submit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1085, 497);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 35);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm13::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(338, 508);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(186, 24);
			this->label10->TabIndex = 28;
			this->label10->Text = L"________________";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(337, 447);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(186, 24);
			this->label11->TabIndex = 27;
			this->label11->Text = L"________________";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(338, 382);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(186, 24);
			this->label12->TabIndex = 26;
			this->label12->Text = L"________________";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(338, 321);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(186, 24);
			this->label13->TabIndex = 25;
			this->label13->Text = L"________________";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(893, 382);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(186, 24);
			this->label14->TabIndex = 30;
			this->label14->Text = L"________________";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(893, 321);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(186, 24);
			this->label15->TabIndex = 29;
			this->label15->Text = L"________________";
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1354, 597);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm13";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Enrollment";
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

		string id = msclr::interop::marshal_as<string>(textBox7->Text);
		try {

		p = con->prepareStatement("SELECT naam,cource,branch,sem FROM student WHERE id=" + id + ";");
		result = p->executeQuery();

		result->next();
		label13->Text = gcnew String(result->getString(1).c_str());
		label12 ->Text = gcnew String(result->getString(2).c_str());
		label11->Text = gcnew String(result->getString(3).c_str());
		label10->Text = gcnew String(result->getString(4).c_str());

		}
		catch (sql::SQLException e) {
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
	try {

	string id = msclr::interop::marshal_as<string>(textBox8->Text);
	p = con->prepareStatement("SELECT SubjectName,Credits FROM Subjects WHERE SubjectID=" + id + ";");
	result = p->executeQuery();
	result->next();

	label15->Text = gcnew String(result->getString(1).c_str());
	label14->Text = gcnew String(result->getString(2).c_str());
	}
	catch (sql::SQLException e) {
		MessageBox::Show("Not Found", "Notification", MessageBoxButtons::OK);
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	label10->Text = "________________";
	label11->Text = "________________";
	label12->Text = "________________";
	label13->Text = "________________";
	label14->Text = "________________";
	label15->Text = "________________";
	textBox7->Text = "";
	textBox8->Text = "";
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

	string Stuid = msclr::interop::marshal_as<string>(textBox7->Text);
	string Subid = msclr::interop::marshal_as<string>(textBox8->Text);

	try {
		
		p = con->prepareStatement("SELECT EnrollmentID FROM Enrollment WHERE StudentID=" + Stuid + " and SubjectID = " + Subid + ";");
		result = p->executeQuery();
		result->next();
		int id = result->getInt(1);
		MessageBox::Show("Already Exist", "Notification", MessageBoxButtons::OK);
		
		
		
	}
	catch (sql::SQLException e) {
		p = con->prepareStatement("INSERT INTO Enrollment(StudentID,SubjectID) VALUES(" + Stuid + "," + Subid + "); ");
		p->executeQuery();
		MessageBox::Show("Successfull", "Notification", MessageBoxButtons::OK);

	}
	
}

private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
	{
		e->Handled = true;
	}
}
};
}
