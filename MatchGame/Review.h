#pragma once
#include "Gratitude.h"
#include "User.h"

namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Review
	/// </summary>
	public ref class Review : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
	public:
		Review(void)
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
		~Review()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(189, 235);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(520, 226);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(341, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 62);
			this->label1->TabIndex = 19;
			this->label1->Text = L"REVIEW";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(221, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(467, 27);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Напишите отзыв об игре \"Парные картинки\"";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkGreen;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(456, 467);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(253, 46);
			this->button19->TabIndex = 24;
			this->button19->Text = L"Отправить";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Review::button19_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(189, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 46);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Review::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(352, 178);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(357, 39);
			this->textBox2->TabIndex = 104;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(184, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 27);
			this->label3->TabIndex = 103;
			this->label3->Text = L"Введите логин:";
			// 
			// Review
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Review";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Отзыв";
			this->Load += gcnew System::EventHandler(this, &Review::Review_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Review_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ review = textBox1->Text;
	String^ login = textBox2->Text;
	if (String::IsNullOrWhiteSpace(textBox1->Text)) {
		MessageBox::Show("К сожалению, Вы не можете отправить отзыв, потому что Вы ничего в нем не написали :(", "Невозможно отправить отзыв!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=MatchGame;Integrated Security=True";
		SqlConnection sqlConnection(connectionString);
		sqlConnection.Open();

		String^ sqlQuery = "UPDATE users SET review = @review WHERE login=@login;";

		SqlCommand command(sqlQuery, % sqlConnection);
		command.Parameters->AddWithValue("@login", login);
		command.Parameters->AddWithValue("@review", review);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->review = review;

		this->Close();
		Gratitude^ grtd = gcnew Gratitude();
		grtd->ShowDialog();
		sqlConnection.Close();
	}
	catch (Exception^ e) {}
}
};
}
