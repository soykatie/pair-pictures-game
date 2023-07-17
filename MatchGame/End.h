#pragma once
#include "User.h"
#include "Rating.h"
namespace MatchGame {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Security::Cryptography;

	/// <summary>
	/// Summary for End
	/// </summary>
	public ref class End : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
	public:
		End(void)
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
		~End()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		String^ Encrypt(String^ input)
		{
			String^ encrypted;

			// ������ ����������

			for (int i = 0; i < input->Length; i++)
			{
				// ������ �������� ������ ������� �� 1 ������� � ������� Unicode
				wchar_t encryptedChar = input[i] + 1;
				encrypted += encryptedChar;
			}

			return encrypted;
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;

	public: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������������������������ToolStripMenuItem;




	public:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button1->Location = System::Drawing::Point(225, 530);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 46);
			this->button1->TabIndex = 92;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &End::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(202, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(496, 62);
			this->label1->TabIndex = 89;
			this->label1->Text = L"Congratilations!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(220, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 27);
			this->label4->TabIndex = 93;
			this->label4->Text = L"����� ����:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(220, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 27);
			this->label3->TabIndex = 95;
			this->label3->Text = L"���������� ��������� ��������:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(220, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(362, 27);
			this->label5->TabIndex = 96;
			this->label5->Text = L"���������� ����������� �������:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic));
			this->label6->Location = System::Drawing::Point(609, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 26);
			this->label6->TabIndex = 97;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(393, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 26);
			this->label7->TabIndex = 98;
			this->label7->Text = L"label7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(631, 276);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 26);
			this->label9->TabIndex = 100;
			this->label9->Text = L"label9";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(220, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 27);
			this->label2->TabIndex = 94;
			this->label2->Text = L"���������� �����:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(473, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 26);
			this->label8->TabIndex = 99;
			this->label8->Text = L"label8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(622, 328);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 26);
			this->label10->TabIndex = 102;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(220, 329);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(356, 27);
			this->label11->TabIndex = 101;
			this->label11->Text = L"���������� ���������� �������:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::DarkGreen;
			this->label12->Location = System::Drawing::Point(220, 381);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(288, 27);
			this->label12->TabIndex = 103;
			this->label12->Text = L"������ ��������� ������\? ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(225, 442);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(283, 34);
			this->textBox1->TabIndex = 104;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(220, 412);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(214, 27);
			this->label13->TabIndex = 105;
			this->label13->Text = L"����������� �����:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkGreen;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(478, 530);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 46);
			this->button2->TabIndex = 106;
			this->button2->Text = L"������ �������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &End::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkGreen;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(516, 442);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(198, 34);
			this->button4->TabIndex = 110;
			this->button4->Text = L"��������� ������";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &End::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������������������ToolStripMenuItem,
					this->�������������������������������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 30);
			this->menuStrip1->TabIndex = 111;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������������������������ToolStripMenuItem
			// 
			this->�������������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->�������������������������ToolStripMenuItem->Name = L"�������������������������ToolStripMenuItem";
			this->�������������������������ToolStripMenuItem->Size = System::Drawing::Size(267, 26);
			this->�������������������������ToolStripMenuItem->Text = L"����������� � �������� � ����";
			this->�������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &End::�������������������������ToolStripMenuItem_Click);
			// 
			// �������������������������������������ToolStripMenuItem
			// 
			this->�������������������������������������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->�������������������������������������ToolStripMenuItem->Name = L"�������������������������������������ToolStripMenuItem";
			this->�������������������������������������ToolStripMenuItem->Size = System::Drawing::Size(139, 26);
			this->�������������������������������������ToolStripMenuItem->Text = L"�������� ����";
			this->�������������������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &End::�������������������������������������ToolStripMenuItem_Click);
			// 
			// End
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"End";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Successful End";
			this->Load += gcnew System::EventHandler(this, &End::End_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void End_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	End::Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Rating^ rating = gcnew Rating();
	rating->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = textBox1->Text;
	int numBonuses = Int32::Parse(label9->Text);
	int numLevels = Int32::Parse(label10->Text);
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		MessageBox::Show("� ���������, �� �� ����� ��������� ������ :(", "���������� ��������� ������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=MatchGame;Integrated Security=True";
		SqlConnection sqlConnection(connectionString);
		sqlConnection.Open();

		String^ sqlQuery = "UPDATE users SET numBonuses = @numBonuses, numLevels = @numLevels WHERE login=@login;";

		SqlCommand command(sqlQuery, % sqlConnection);
		command.Parameters->AddWithValue("@login", login);
		command.Parameters->AddWithValue("@numBonuses", numBonuses);
		command.Parameters->AddWithValue("@numLevels", numLevels);

		command.ExecuteNonQuery();

		MessageBox::Show("������ ������� ���������!", "���������� �������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {}
}
private: System::Void �������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ filePath = saveFileDialog->FileName;
		String^ login = textBox1->Text;
		String^ numBonuses = label9->Text;
		String^ numLevels = label10->Text;
		String^ gameTime = label7->Text;
		String^ gameResults = "����� ������������: " + login + "; ���-�� ������� ������������: " + numBonuses + "; ���-�� ���������� ������� ������������: " + numLevels + "; ����� ����: " + gameTime;
		String^ encryptedResults = Encrypt(gameResults);
		StreamWriter^ writer = gcnew StreamWriter(filePath, false, Encoding::UTF8);
		writer->Write(encryptedResults);
		writer->Close();
	}
}
private: System::Void �������������������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ filePath = openFileDialog->FileName;
		StreamReader^ reader = gcnew StreamReader(filePath);
		String^ encryptedData = reader->ReadToEnd();
		reader->Close();
		MessageBox::Show("������ ����� ������ �������", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}