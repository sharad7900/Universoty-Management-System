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
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::Button^ button3;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(-1, 261);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1190, 433);
			this->dataGridView1->StandardTab = true;
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->DividerWidth = 2;
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 52;
			// 
			// Column2
			// 
			this->Column2->DividerWidth = 2;
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->DividerWidth = 2;
			this->Column3->HeaderText = L"Father";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->DividerWidth = 2;
			this->Column4->HeaderText = L"Mother";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->DividerWidth = 2;
			this->Column5->HeaderText = L"Mobile";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->DividerWidth = 2;
			this->Column6->HeaderText = L"Email";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->DividerWidth = 2;
			this->Column7->HeaderText = L"Gender";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->DividerWidth = 2;
			this->Column8->HeaderText = L"DOB";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->DividerWidth = 2;
			this->Column9->HeaderText = L"Category";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->DividerWidth = 2;
			this->Column10->HeaderText = L"Semester";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->DividerWidth = 2;
			this->Column11->HeaderText = L"Course";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->DividerWidth = 2;
			this->Column12->HeaderText = L"Branch";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->DividerWidth = 2;
			this->Column13->HeaderText = L"Add.";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(644, 68);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(323, 29);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(996, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(49, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(214, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(644, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 43);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(849, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 43);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Student ID", L"Name" });
			this->comboBox1->Location = System::Drawing::Point(358, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(253, 28);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"Select";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1190, 693);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete Addmission";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		sql::Connection* con = driver->connect("tcp://127.0.0.1:3306", "root", "");
		sql::ResultSet* result;
		sql::PreparedStatement* p;


private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		con->setSchema("newschema");
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
	}
	p = con->prepareStatement("SELECT * FROM student;");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}
	comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	string selection = msclr::interop::marshal_as<string>(comboBox1->Text);

	if (selection == "Student ID") {

		string id = msclr::interop::marshal_as<string>(textBox1->Text);
		p = con->prepareStatement("SELECT * FROM student Where id = " + id + ";");
		result = p->executeQuery();
		this->dataGridView1->Rows->Clear();
		while (result->next()) {
			int rowIndex = this->dataGridView1->Rows->Add();
			for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
				this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
			}
		}
	}
	else if (selection == "Name") {
		string name = msclr::interop::marshal_as<string>(textBox1->Text);
		p = con->prepareStatement("SELECT * FROM student WHERE naam LIKE '"+name+"%';");
		result = p->executeQuery();
		this->dataGridView1->Rows->Clear();
		while (result->next()) {
			int rowIndex = this->dataGridView1->Rows->Add();
			for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
				this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
			}
		}
	}
	else {
		MessageBox::Show("Select an opption", "Notification", MessageBoxButtons::OK);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	string id = msclr::interop::marshal_as<string>(textBox1->Text);

	try {
	p = con->prepareStatement("DELETE FROM Enrollment WHERE StudentID = ?;");
	p->setInt(1, stoi(id));
	p->executeQuery();
	p = con->prepareStatement("DELETE FROM fees WHERE id = ?;");
	p->setInt(1, stoi(id));
	p->executeQuery();
	p = con->prepareStatement("DELETE FROM student WHERE id = " + id + ";");
	p->executeQuery();
	//textBox1->Text = "";
	}
	catch (sql::SQLException e) {
		MessageBox::Show("Invalid ID", "Notification", MessageBoxButtons::OK);
	}
	p = con->prepareStatement("SELECT * FROM student;");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	p = con->prepareStatement("SELECT * FROM student;");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	String^ sel = comboBox1->Text;
	if ("Student ID" == sel->ToString()) {
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
