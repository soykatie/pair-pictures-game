#pragma once

#include "Level_1_Princesses.h"
#include "Level_2_Princesses.h"
#include "Level_3_Princesses.h"
#include "Level_4_Princesses.h"
#include "Level_5_Princesses.h"

#include "Level_1_Cars.h"
#include "Level_2_Cars.h"
#include "Level_3_Cars.h"
#include "Level_4_Cars.h"
#include "Level_5_Cars.h"

#include "Level_1_Meals.h"
#include "Level_2_Meals.h"
#include "Level_3_Meals.h"
#include "Level_4_Meals.h"
#include "Level_5_Meals.h"

#include "About.h"
#include "Account.h"
#include "Review.h"
#include "Gratitude.h"
#include "User.h"
#include "Rating.h"

namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StartGame_Screen
	/// </summary>
	public ref class StartGame_Screen : public System::Windows::Forms::Form
	{
	private: int lastSelectedIndex = -1;
	private: bool selectionCancelled = false;
	public: User^ user;
	public:
		StartGame_Screen(void)
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
		~StartGame_Screen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(164, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 46);
			this->button1->TabIndex = 100;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StartGame_Screen::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(159, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 27);
			this->label3->TabIndex = 99;
			this->label3->Text = L"�������� �������� ����:";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGreen;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(479, 443);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(281, 46);
			this->button15->TabIndex = 97;
			this->button15->Text = L"������ ����";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &StartGame_Screen::button15_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::MintCream;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"���������", L"����� �����������", L"���" });
			this->comboBox2->Location = System::Drawing::Point(164, 265);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(596, 39);
			this->comboBox2->TabIndex = 96;
			this->comboBox2->Text = L"��������";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &StartGame_Screen::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(153, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(607, 62);
			this->label1->TabIndex = 95;
			this->label1->Text = L"Find all pair pictures";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(159, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(389, 27);
			this->label2->TabIndex = 102;
			this->label2->Text = L"�������� ������� ��� �����������:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::MintCream;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"������� 1 (6 ��������, 30 ������)", L"������� 2 (12 ��������, 1 ������)",
					L"������� 3 (18 ��������, 2 ������)", L"������� 4 (24 ��������, 3 ������ 30 ������)", L"������� 5 (28 ��������, 4 ������)"
			});
			this->comboBox1->Location = System::Drawing::Point(164, 366);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(596, 39);
			this->comboBox1->TabIndex = 101;
			this->comboBox1->Text = L"�������";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StartGame_Screen::comboBox1_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 29);
			this->menuStrip1->TabIndex = 103;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(88, 25);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartGame_Screen::�������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(156, 25);
			this->��������������ToolStripMenuItem->Text = L"������� ������� ";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartGame_Screen::��������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(143, 25);
			this->�������������ToolStripMenuItem->Text = L"�������� �����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartGame_Screen::�������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(72, 25);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartGame_Screen::�����ToolStripMenuItem_Click);
			// 
			// StartGame_Screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StartGame_Screen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� ���������� � ���� \"������ ��������\"";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ frm = gcnew About();
		frm->ShowDialog();
	}
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Rating^ rating = gcnew Rating();
	rating->ShowDialog();
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Review^ review = gcnew Review();
	review->ShowDialog();
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StartGame_Screen::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	InitializeComponent();
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->SelectedItem->ToString() == L"���������" && comboBox1->SelectedItem->ToString() == L"������� 1 (6 ��������, 30 ������)") {
		Level_1_Princesses^ lvl1princess = gcnew Level_1_Princesses();
		lvl1princess->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���������" && comboBox1->SelectedItem->ToString() == L"������� 2 (12 ��������, 1 ������)") {
		Level_2_Princesses^ lvl2princess = gcnew Level_2_Princesses();
		lvl2princess->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���������" && comboBox1->SelectedItem->ToString() == L"������� 3 (18 ��������, 2 ������)") {
		Level_3_Princesses^ lvl3princess = gcnew Level_3_Princesses();
		lvl3princess->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���������" && comboBox1->SelectedItem->ToString() == L"������� 4 (24 ��������, 3 ������ 30 ������)") {
		Level_4_Princesses^ lvl4princess = gcnew Level_4_Princesses();
		lvl4princess->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���������" && comboBox1->SelectedItem->ToString() == L"������� 5 (28 ��������, 4 ������)") {
		Level_5_Princesses^ lvl5princess = gcnew Level_5_Princesses();
		lvl5princess->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"����� �����������" && comboBox1->SelectedItem->ToString() == L"������� 1 (6 ��������, 30 ������)") {
		Level_1_Cars^ lvl1cars = gcnew Level_1_Cars();
		lvl1cars->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"����� �����������" && comboBox1->SelectedItem->ToString() == L"������� 2 (12 ��������, 1 ������)") {
		Level_2_Cars^ lvl2cars = gcnew Level_2_Cars();
		lvl2cars->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"����� �����������" && comboBox1->SelectedItem->ToString() == L"������� 3 (18 ��������, 2 ������)") {
		Level_3_Cars^ lvl3cars = gcnew Level_3_Cars();
		lvl3cars->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"����� �����������" && comboBox1->SelectedItem->ToString() == L"������� 4 (24 ��������, 3 ������ 30 ������)") {
		Level_4_Cars^ lvl4cars = gcnew Level_4_Cars();
		lvl4cars->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"����� �����������" && comboBox1->SelectedItem->ToString() == L"������� 5 (28 ��������, 4 ������)") {
		Level_5_Cars^ lvl5cars = gcnew Level_5_Cars();
		lvl5cars->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���" && comboBox1->SelectedItem->ToString() == L"������� 1 (6 ��������, 30 ������)") {
		Level_1_Meals^ lvl1meals = gcnew Level_1_Meals();
		lvl1meals->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���" && comboBox1->SelectedItem->ToString() == L"������� 2 (12 ��������, 1 ������)") {
		Level_2_Meals^ lvl2meals = gcnew Level_2_Meals();
		lvl2meals->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���" && comboBox1->SelectedItem->ToString() == L"������� 3 (18 ��������, 2 ������)") {
		Level_3_Meals^ lvl3meals = gcnew Level_3_Meals();
		lvl3meals->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���" && comboBox1->SelectedItem->ToString() == L"������� 4 (24 ��������, 3 ������ 30 ������)") {
		Level_4_Meals^ lvl4meals = gcnew Level_4_Meals();
		lvl4meals->ShowDialog();
	}
	else if (comboBox2->SelectedItem->ToString() == L"���" && comboBox1->SelectedItem->ToString() == L"������� 5 (28 ��������, 4 ������)") {
		Level_5_Meals^ lvl5meals = gcnew Level_5_Meals();
		lvl5meals->ShowDialog();
	}
	else
	{
		MessageBox::Show("�� ������� �� ��� ��������� ����! ��������� � ��������� �� ��� ���!", "Ooops...", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}
};
}
