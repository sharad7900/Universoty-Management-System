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
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
















	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button3;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;






























































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(37, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(712, 61);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm9::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1115, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(712, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 261);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Size = System::Drawing::Size(1519, 444);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 52.52117F;
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 75;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 52.52117F;
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 52.52117F;
			this->Column3->HeaderText = L"DOB";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 52.52117F;
			this->Column4->HeaderText = L"Mobile";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->FillWeight = 52.52117F;
			this->Column5->HeaderText = L"Email";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 200;
			// 
			// Column6
			// 
			this->Column6->FillWeight = 52.52117F;
			this->Column6->HeaderText = L"Gender";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->FillWeight = 52.52117F;
			this->Column7->HeaderText = L"Address";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 250;
			// 
			// Column8
			// 
			this->Column8->FillWeight = 812.1826F;
			this->Column8->HeaderText = L"Qualification";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 150;
			// 
			// Column9
			// 
			this->Column9->FillWeight = 52.52117F;
			this->Column9->HeaderText = L"Document";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->FillWeight = 52.52117F;
			this->Column10->HeaderText = L"Doc. Number";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 175;
			// 
			// Column11
			// 
			this->Column11->FillWeight = 52.52117F;
			this->Column11->HeaderText = L"Experience";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 150;
			// 
			// Column12
			// 
			this->Column12->FillWeight = 52.52117F;
			this->Column12->HeaderText = L"Skills";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 150;
			// 
			// Column13
			// 
			this->Column13->FillWeight = 52.52117F;
			this->Column13->HeaderText = L"Department";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 200;
			// 
			// Column14
			// 
			this->Column14->FillWeight = 52.52117F;
			this->Column14->HeaderText = L"Salary";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Width = 150;
			// 
			// Column15
			// 
			this->Column15->FillWeight = 52.52117F;
			this->Column15->HeaderText = L"Subject";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 150;
			// 
			// Column16
			// 
			this->Column16->FillWeight = 52.52117F;
			this->Column16->HeaderText = L"Date Of Joining";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 300;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Faculty ID", L"Name" });
			this->comboBox1->Location = System::Drawing::Point(451, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 28);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Select";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm9::comboBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(973, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 33);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm9::button3_Click);
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1523, 704);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Find Faculty";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
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

		private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) {
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

				p = con->prepareStatement("SELECT * FROM faculty;");
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
				MessageBox::Show("Not found", "Notification", MessageBoxButtons::OK);
			}

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

		string selection = msclr::interop::marshal_as<string>(comboBox1->Text);
		if (selection == "Name") {
			string name = msclr::interop::marshal_as<string>(textBox1->Text);
			p = con->prepareStatement("SELECT * FROM faculty Where naam LIKE '" + name + "%';");
			result = p->executeQuery();
			this->dataGridView1->Rows->Clear();
			while (result->next()) {
				int rowIndex = this->dataGridView1->Rows->Add();
				for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
					this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
				}
			}
		}
		else if (selection == "Faculty ID") {
			string id = msclr::interop::marshal_as<string>(textBox1->Text);

			try {

				p = con->prepareStatement("SELECT * FROM faculty Where id = " + id + ";");
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
				MessageBox::Show("Not found", "Notification", MessageBoxButtons::OK);
			}
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

	string id = msclr::interop::marshal_as<string>(textBox1->Text);
	try {

		p = con->prepareStatement("DELETE FROM faculty Where id = " + id + ";");
		result = p->executeQuery();
		MessageBox::Show("Successfull", "Notification", MessageBoxButtons::OK);
	}
	catch (sql::SQLException e)
	{
		MessageBox::Show("Not found", "Notification", MessageBoxButtons::OK);
	}
	try {

		p = con->prepareStatement("SELECT * FROM faculty;");
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
		MessageBox::Show("Not found", "Notification", MessageBoxButtons::OK);
	}


}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	p = con->prepareStatement("SELECT * FROM faculty;");
	result = p->executeQuery();
	this->dataGridView1->Rows->Clear();
	while (result->next()) {
		int rowIndex = this->dataGridView1->Rows->Add();
		for (int i = 0; i < result->getMetaData()->getColumnCount(); i++) {
			this->dataGridView1->Rows[rowIndex]->Cells[i]->Value = gcnew String(result->getString(i + 1).c_str());
		}
	}

	textBox1->Text = "";
	comboBox1->Text = "Select";
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	String^ sel = comboBox1->Text;
	if (sel->ToString() == "Faculty ID") {
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
