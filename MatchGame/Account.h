#pragma once

namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Account
	/// </summary>
	public ref class Account : public System::Windows::Forms::Form
	{
	public:
		Account(void)
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
		~Account()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label9;
	private:
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label10;
	private:
	private: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label12;
	private:
	private: System::Windows::Forms::Label^ label13;
	public:
	public:

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(170, 512);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(581, 46);
			this->button1->TabIndex = 107;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Account::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(152, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(599, 62);
			this->label1->TabIndex = 103;
			this->label1->Text = L"Account information";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(417, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 26);
			this->label9->TabIndex = 115;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(330, 281);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 26);
			this->label8->TabIndex = 114;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(279, 235);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 26);
			this->label7->TabIndex = 113;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic));
			this->label6->Location = System::Drawing::Point(279, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 26);
			this->label6->TabIndex = 112;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(165, 332);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 27);
			this->label5->TabIndex = 111;
			this->label5->Text = L"Количество бонусов:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(165, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 27);
			this->label3->TabIndex = 110;
			this->label3->Text = L"Логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(165, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 27);
			this->label2->TabIndex = 109;
			this->label2->Text = L"Роль в игре:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(165, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 27);
			this->label4->TabIndex = 108;
			this->label4->Text = L"Email:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(548, 382);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 26);
			this->label10->TabIndex = 117;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(165, 383);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(356, 27);
			this->label11->TabIndex = 116;
			this->label11->Text = L"Количество пройденных уровней:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(478, 437);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 26);
			this->label12->TabIndex = 119;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(165, 438);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(281, 27);
			this->label13->TabIndex = 118;
			this->label13->Text = L"Место в рейтинге игроков:";
			// 
			// Account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
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
			this->Name = L"Account";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Аккаунт пользователя";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Account::Close();
	}
};
}
