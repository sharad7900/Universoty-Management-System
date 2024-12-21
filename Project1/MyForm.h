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
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include "MyForm10.h"
#include "MyForm11.h"
#include "MyForm12.h"
#include "MyForm13.h"
#include "MyForm14.h"
#include "MyForm15.h"
#include "MyForm16.h"



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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ addmissionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newAddmissionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ upgradeSemesterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ feesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ teachersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addTeacherInformTIOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutUsToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ feesSubmitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ feesDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateInformationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteInformationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ addSubjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateSubjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enrollStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateEnrollmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ upToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createResultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ findAndDeleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentsDataToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->username = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->addmissionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newAddmissionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->upgradeSemesterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feesSubmitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feesDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentsDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teachersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addTeacherInformTIOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addSubjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateSubjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enrollStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateEnrollmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->upToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createResultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findAndDeleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->AccessibleDescription = L"Username";
			this->username->AccessibleName = L"Username";
			this->username->AutoSize = true;
			this->username->Location = System::Drawing::Point(197, 114);
			this->username->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(0, 16);
			this->username->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AccessibleDescription = L"";
			this->label1->AccessibleName = L"";
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(270, 364);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(509, 362);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(856, 35);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AccessibleDescription = L"";
			this->label2->AccessibleName = L"";
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(278, 507);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(509, 505);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(856, 35);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(860, 37);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 45);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Login";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(509, 657);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 58);
			this->button1->TabIndex = 6;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1118, 657);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(247, 58);
			this->button3->TabIndex = 9;
			this->button3->Text = L"CANCEL";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Bisque;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->addmissionToolStripMenuItem,
					this->feesToolStripMenuItem, this->studentToolStripMenuItem, this->teachersToolStripMenuItem, this->toolStripMenuItem2, this->aboutUsToolStripMenuItem,
					this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1597, 84);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// addmissionToolStripMenuItem
			// 
			this->addmissionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newAddmissionToolStripMenuItem,
					this->upgradeSemesterToolStripMenuItem
			});
			this->addmissionToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addmissionToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addmissionToolStripMenuItem.Image")));
			this->addmissionToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->addmissionToolStripMenuItem->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->addmissionToolStripMenuItem->Name = L"addmissionToolStripMenuItem";
			this->addmissionToolStripMenuItem->Size = System::Drawing::Size(82, 80);
			this->addmissionToolStripMenuItem->Text = L"Addmission";
			this->addmissionToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// newAddmissionToolStripMenuItem
			// 
			this->newAddmissionToolStripMenuItem->Name = L"newAddmissionToolStripMenuItem";
			this->newAddmissionToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->newAddmissionToolStripMenuItem->Text = L"New Addmission";
			this->newAddmissionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newAddmissionToolStripMenuItem_Click);
			// 
			// upgradeSemesterToolStripMenuItem
			// 
			this->upgradeSemesterToolStripMenuItem->Name = L"upgradeSemesterToolStripMenuItem";
			this->upgradeSemesterToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->upgradeSemesterToolStripMenuItem->Text = L"Delete Addmission";
			this->upgradeSemesterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::upgradeSemesterToolStripMenuItem_Click);
			// 
			// feesToolStripMenuItem
			// 
			this->feesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->feesSubmitToolStripMenuItem,
					this->feesDataToolStripMenuItem
			});
			this->feesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->feesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feesToolStripMenuItem.Image")));
			this->feesToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->feesToolStripMenuItem->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->feesToolStripMenuItem->Name = L"feesToolStripMenuItem";
			this->feesToolStripMenuItem->Size = System::Drawing::Size(72, 80);
			this->feesToolStripMenuItem->Text = L"Fees";
			this->feesToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// feesSubmitToolStripMenuItem
			// 
			this->feesSubmitToolStripMenuItem->Name = L"feesSubmitToolStripMenuItem";
			this->feesSubmitToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->feesSubmitToolStripMenuItem->Text = L"Fees Submit";
			this->feesSubmitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::feesSubmitToolStripMenuItem_Click);
			// 
			// feesDataToolStripMenuItem
			// 
			this->feesDataToolStripMenuItem->Name = L"feesDataToolStripMenuItem";
			this->feesDataToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->feesDataToolStripMenuItem->Text = L"Fees Data";
			this->feesDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::feesDataToolStripMenuItem_Click);
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->updateStudentToolStripMenuItem,
					this->studentsDataToolStripMenuItem
			});
			this->studentToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->studentToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"studentToolStripMenuItem.Image")));
			this->studentToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->studentToolStripMenuItem->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(72, 80);
			this->studentToolStripMenuItem->Text = L"Student";
			this->studentToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// updateStudentToolStripMenuItem
			// 
			this->updateStudentToolStripMenuItem->Name = L"updateStudentToolStripMenuItem";
			this->updateStudentToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->updateStudentToolStripMenuItem->Text = L"Update Student";
			this->updateStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateStudentToolStripMenuItem_Click);
			// 
			// studentsDataToolStripMenuItem
			// 
			this->studentsDataToolStripMenuItem->Name = L"studentsDataToolStripMenuItem";
			this->studentsDataToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->studentsDataToolStripMenuItem->Text = L"Search Student";
			this->studentsDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::studentsDataToolStripMenuItem_Click);
			// 
			// teachersToolStripMenuItem
			// 
			this->teachersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addTeacherInformTIOToolStripMenuItem,
					this->updateInformationToolStripMenuItem, this->deleteInformationToolStripMenuItem
			});
			this->teachersToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->teachersToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"teachersToolStripMenuItem.Image")));
			this->teachersToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->teachersToolStripMenuItem->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->teachersToolStripMenuItem->Name = L"teachersToolStripMenuItem";
			this->teachersToolStripMenuItem->Size = System::Drawing::Size(72, 80);
			this->teachersToolStripMenuItem->Text = L"Teachers";
			this->teachersToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// addTeacherInformTIOToolStripMenuItem
			// 
			this->addTeacherInformTIOToolStripMenuItem->Name = L"addTeacherInformTIOToolStripMenuItem";
			this->addTeacherInformTIOToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->addTeacherInformTIOToolStripMenuItem->Text = L"Add Teacher Information";
			this->addTeacherInformTIOToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addTeacherInformTIOToolStripMenuItem_Click);
			// 
			// updateInformationToolStripMenuItem
			// 
			this->updateInformationToolStripMenuItem->Name = L"updateInformationToolStripMenuItem";
			this->updateInformationToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->updateInformationToolStripMenuItem->Text = L"Update Information";
			this->updateInformationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateInformationToolStripMenuItem_Click);
			// 
			// deleteInformationToolStripMenuItem
			// 
			this->deleteInformationToolStripMenuItem->Name = L"deleteInformationToolStripMenuItem";
			this->deleteInformationToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->deleteInformationToolStripMenuItem->Text = L"Delete Information";
			this->deleteInformationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteInformationToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addSubjectToolStripMenuItem,
					this->updateSubjectToolStripMenuItem, this->enrollStudentToolStripMenuItem, this->updateEnrollmentToolStripMenuItem, this->upToolStripMenuItem
			});
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem2->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(72, 80);
			this->toolStripMenuItem2->Text = L"Subject";
			this->toolStripMenuItem2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// addSubjectToolStripMenuItem
			// 
			this->addSubjectToolStripMenuItem->Name = L"addSubjectToolStripMenuItem";
			this->addSubjectToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->addSubjectToolStripMenuItem->Text = L"Add Subject";
			this->addSubjectToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addSubjectToolStripMenuItem_Click);
			// 
			// updateSubjectToolStripMenuItem
			// 
			this->updateSubjectToolStripMenuItem->Name = L"updateSubjectToolStripMenuItem";
			this->updateSubjectToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->updateSubjectToolStripMenuItem->Text = L"Update Subject";
			this->updateSubjectToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateSubjectToolStripMenuItem_Click);
			// 
			// enrollStudentToolStripMenuItem
			// 
			this->enrollStudentToolStripMenuItem->Name = L"enrollStudentToolStripMenuItem";
			this->enrollStudentToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->enrollStudentToolStripMenuItem->Text = L"Find and Delete subject";
			this->enrollStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::enrollStudentToolStripMenuItem_Click);
			// 
			// updateEnrollmentToolStripMenuItem
			// 
			this->updateEnrollmentToolStripMenuItem->Name = L"updateEnrollmentToolStripMenuItem";
			this->updateEnrollmentToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->updateEnrollmentToolStripMenuItem->Text = L"Enroll Student";
			this->updateEnrollmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateEnrollmentToolStripMenuItem_Click);
			// 
			// upToolStripMenuItem
			// 
			this->upToolStripMenuItem->Name = L"upToolStripMenuItem";
			this->upToolStripMenuItem->Size = System::Drawing::Size(200, 22);
			this->upToolStripMenuItem->Text = L"Delete Enrollment";
			this->upToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::upToolStripMenuItem_Click);
			// 
			// aboutUsToolStripMenuItem
			// 
			this->aboutUsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->createResultToolStripMenuItem,
					this->findAndDeleteToolStripMenuItem
			});
			this->aboutUsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->aboutUsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutUsToolStripMenuItem.Image")));
			this->aboutUsToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->aboutUsToolStripMenuItem->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->aboutUsToolStripMenuItem->Name = L"aboutUsToolStripMenuItem";
			this->aboutUsToolStripMenuItem->Size = System::Drawing::Size(72, 80);
			this->aboutUsToolStripMenuItem->Text = L"Results";
			this->aboutUsToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// createResultToolStripMenuItem
			// 
			this->createResultToolStripMenuItem->Name = L"createResultToolStripMenuItem";
			this->createResultToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->createResultToolStripMenuItem->Text = L"Create Result";
			this->createResultToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createResultToolStripMenuItem_Click);
			// 
			// findAndDeleteToolStripMenuItem
			// 
			this->findAndDeleteToolStripMenuItem->Name = L"findAndDeleteToolStripMenuItem";
			this->findAndDeleteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->findAndDeleteToolStripMenuItem->Text = L"Result Record";
			this->findAndDeleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::findAndDeleteToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripMenuItem1->Margin = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(82, 80);
			this->toolStripMenuItem1->Text = L"Exit System";
			this->toolStripMenuItem1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(-6, 85);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2000, 1000);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1597, 842);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sanskar College";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
            
			menuStrip1->Visible = false;
			pictureBox1->Visible = false;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		string username = msclr::interop::marshal_as<string>(textBox1->Text);
		string password = msclr::interop::marshal_as<string>(textBox2->Text);

		if (username == "Sharad" && password == "1010") {
			label1->Visible = false;
			label2->Visible = false;
			textBox1->Visible = false;
			textBox2->Visible = false;
			button1->Visible = false;
			button3->Visible = false;
			label3->Visible = false;
			menuStrip1->Visible = true;
			pictureBox1->Visible = true;


		}
		else {
			MessageBox::Show("Wrong Credentials","Error",MessageBoxButtons::OK);
		}

	}



private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	exit(1);
}
private: System::Void exitSystemToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	label1->Visible = true;
	label2->Visible = true;
	textBox1->Visible = true;
	textBox2->Visible = true;
	button1->Visible = true;
	button3->Visible = true;
	label3->Visible = true;
	menuStrip1->Visible = false;
	pictureBox1->Visible = false;
}
private: System::Void newAddmissionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm1^ second = gcnew MyForm1();
	second->Show();
}
private: System::Void upgradeSemesterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm2^ second = gcnew MyForm2();
	second->Show();
}


private: System::Void feesSubmitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ second = gcnew MyForm3();
	second->Show();
}
private: System::Void feesDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ second = gcnew MyForm4();
	second->Show();
}
private: System::Void updateStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm5^ second = gcnew MyForm5();
	second->Show();
}
private: System::Void studentsDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm6^ second = gcnew MyForm6();
	second->Show();
}
private: System::Void addTeacherInformTIOToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm7^ second = gcnew MyForm7();
	second->Show();
}
private: System::Void updateInformationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm8^ second = gcnew MyForm8();
	second->Show();
}
private: System::Void deleteInformationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm9^ second = gcnew MyForm9();
	second->Show();
}
private: System::Void addSubjectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm10^ second = gcnew MyForm10();
	second->Show();
}
private: System::Void updateSubjectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12^ second = gcnew MyForm12();
	second->Show();
}
private: System::Void enrollStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm11^ second = gcnew MyForm11();
	second->Show();
}
private: System::Void updateEnrollmentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm13^ second = gcnew MyForm13();
	second->Show();
}
private: System::Void upToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm14^ second = gcnew MyForm14();
	second->Show();
}
private: System::Void createResultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm15^ second = gcnew MyForm15();
	second->Show();
}
private: System::Void findAndDeleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm16^ second = gcnew MyForm16();
	second->Show();
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	exit(0);
}
};
}
