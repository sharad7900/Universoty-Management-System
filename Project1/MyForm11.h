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
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(37, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(177, 168);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(631, 48);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm11::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(995, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 41);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(631, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 36);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm11::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->dataGridView1->Location = System::Drawing::Point(286, 267);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Size = System::Drawing::Size(830, 335);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->DividerWidth = 2;
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->DividerWidth = 2;
			this->Column2->HeaderText = L"Subject Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->DividerWidth = 2;
			this->Column3->HeaderText = L"Credits";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(871, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 36);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm11::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Subject ID", L"Subject Name" });
			this->comboBox1->Location = System::Drawing::Point(402, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(204, 28);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"Select";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm11::comboBox1_SelectedIndexChanged);
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1256, 601);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm11";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete Subject";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
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

	private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

		try
		{
			con->setSchema("newschema");
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
		}
		try {

		p = con->prepareStatement("SELECT * FROM Subjects;");
		result = p->executeQuery();
		this->dataGridView1->Rows->Clear();
		while (result->next()) {
			int rowIndex = this->dataGridView1->Rows->Add();
			for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
				this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
			}
		}
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	string selection = msclr::interop::marshal_as<string>(comboBox1->Text);
	if (selection == "Subject Name") {
		string name = msclr::interop::marshal_as<string>(textBox1->Text);
		p = con->prepareStatement("SELECT * FROM Subjects where SubjectName LIKE '" + name + "%';");
		result = p->executeQuery();
		this->dataGridView1->Rows->Clear();
		while (result->next()) {
			int rowIndex = this->dataGridView1->Rows->Add();
			for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
				this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
			}
		}
	}
	else if (selection == "Subject ID") {

		string id = msclr::interop::marshal_as<string>(textBox1->Text);

		try {

			p = con->prepareStatement("SELECT * FROM Subjects where SubjectID = " + id + ";");
			result = p->executeQuery();
			this->dataGridView1->Rows->Clear();
			while (result->next()) {
				int rowIndex = this->dataGridView1->Rows->Add();
				for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
					this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
				}
			}
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Not Found", "Status", MessageBoxButtons::OK);
		}
	}
	else {
		MessageBox::Show("Select an option", "Notification", MessageBoxButtons::OK);
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	string id = msclr::interop::marshal_as<string>(textBox1->Text);
	try {

	p = con->prepareStatement("DELETE FROM Subjects WHERE SubjectID = " + id + ";");
	p->executeQuery();
	MessageBox::Show("Success", "Status", MessageBoxButtons::OK);
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Unsccessfull", "Status", MessageBoxButtons::OK);
	}
	try {

		p = con->prepareStatement("SELECT * FROM Subjects;");
		result = p->executeQuery();
		this->dataGridView1->Rows->Clear();
		while (result->next()) {
			int rowIndex = this->dataGridView1->Rows->Add();
			for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
				this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
			}
		}
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	p = con->prepareStatement("SELECT * FROM Subjects;");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}
	comboBox1->Text = "Select";
	textBox1->Text = "";
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ sel = comboBox1->Text;
	if (sel->ToString() == "Subject ID") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8)
		{
			e->Handled = true;
		}
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
};
}
