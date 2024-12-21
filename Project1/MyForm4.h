#pragma once

#include"MyForm3.h"
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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(940, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 43);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(686, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 43);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(686, 55);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(358, 29);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::textBox1_KeyPress);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(214, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(50, 252);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1017, 433);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->DividerWidth = 2;
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column2->DividerWidth = 2;
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column3->DividerWidth = 2;
			this->Column3->HeaderText = L"Course";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column4->DividerWidth = 2;
			this->Column4->HeaderText = L"Branch";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column5->DefaultCellStyle = dataGridViewCellStyle6;
			this->Column5->DividerWidth = 2;
			this->Column5->HeaderText = L"Semester";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column6->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column6->DividerWidth = 2;
			this->Column6->HeaderText = L"Fees";
			this->Column6->Name = L"Column6";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Student ID", L"Name" });
			this->comboBox1->Location = System::Drawing::Point(432, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(217, 28);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"Select";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm4::comboBox1_SelectedIndexChanged);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1126, 697);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fees Data";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
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
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		con->setSchema("newschema");
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
	}

	p = con->prepareStatement("SELECT student.id, naam, cource, branch, sem, fees FROM student INNER JOIN fees ON fees.id = student.id;");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	string selection = msclr::interop::marshal_as<string>(comboBox1->Text);

	if (selection == "Student ID") {
		string id = msclr::interop::marshal_as<string>(textBox1->Text);
		try {

			p = con->prepareStatement("SELECT student.id, naam, cource, branch, sem, fees FROM student INNER JOIN fees ON fees.id = student.id and student.id = " + id + ";");
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
			MessageBox::Show("Not Found", "Notification", MessageBoxButtons::OK);
		}
	}
	else if(selection=="Name") {

		string name = msclr::interop::marshal_as<string>(textBox1->Text);
		p = con->prepareStatement("SELECT student.id, naam, cource, branch, sem, fees FROM student INNER JOIN fees ON fees.id = student.id and student.naam LIKE '" + name + "%';");
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
		MessageBox::Show("Select an option", "Notification", MessageBoxButtons::OK);
	}

}

	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
    
		try
		{
			con->setSchema("newschema");
		}
		catch (sql::SQLException e)
		{
			MessageBox::Show("Database error", "Error", MessageBoxButtons::OK);
		}

		p = con->prepareStatement("SELECT student.id, naam, cource, branch, sem, fees FROM student INNER JOIN fees ON fees.id = student.id;");
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


private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	String^ sel = comboBox1->Text;
	if (sel->ToString() == "Student ID") {
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
