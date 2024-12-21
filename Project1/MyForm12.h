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
	/// Summary for MyForm12
	/// </summary>
	public ref class MyForm12 : public System::Windows::Forms::Form
	{
	public:
		MyForm12(void)
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
		~MyForm12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm12::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(339, 590);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 44);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm12::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(144, 590);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 44);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm12::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(139, 500);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 29);
			this->textBox2->TabIndex = 11;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm12::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(139, 370);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 29);
			this->textBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(205, 458);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Subject Credit";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(205, 328);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Subject Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(89, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(388, 171);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(85, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 24);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Subject ID";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(209, 228);
			this->textBox3->MaxLength = 15;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 29);
			this->textBox3->TabIndex = 15;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm12::textBox3_KeyPress);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Cyan;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(402, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 39);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Find";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm12::button3_Click);
			// 
			// MyForm12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(566, 675);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Update Subject";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "");
		sql::ResultSet* result;
		sql::PreparedStatement* p;

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			con->setSchema("newschema");
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
		}

		string id = msclr::interop::marshal_as<string>(textBox3->Text);

		try {
			p = con->prepareStatement("SELECT * FROM Subjects WHERE SubjectID=" + id + ";");
			result = p->executeQuery();

			result->next();
			textBox1->Text = gcnew String(result->getString(2).c_str());
			textBox2->Text = gcnew String(result->getString(3).c_str());
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Not Found", "Status", MessageBoxButtons::OK);
		}


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		con->setSchema("newschema");
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
	}

	string id = msclr::interop::marshal_as<string>(textBox3->Text);
	string name = msclr::interop::marshal_as<string>(textBox1->Text);
	string credit = msclr::interop::marshal_as<string>(textBox2->Text);

	try {
		p = con->prepareStatement("UPDATE Subjects SET SubjectName=?,Credits=? WHERE SubjectID=" + id + ";");
		p->setString(1, name);
		p->setString(2, credit);
		p->executeQuery();
		MessageBox::Show("Success", "Status", MessageBoxButtons::OK);
		textBox1->Text = "";
		textBox2->Text = "";
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Faild", "Status", MessageBoxButtons::OK);
	}
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
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
