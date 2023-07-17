#pragma once
#include "Admin_Screen.h"
#include "User.h"
#include "StartGame_Screen.h"
#include "Register.h"
namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
	public:
		Login(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(347, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 62);
			this->label1->TabIndex = 81;
			this->label1->Text = L"Login";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(152, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 46);
			this->button1->TabIndex = 91;
			this->button1->Text = L"—·ÓÒËÚ¸";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(147, 317);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 27);
			this->label3->TabIndex = 90;
			this->label3->Text = L"¬˚·ÂËÚÂ ÓÎ¸:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(147, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 27);
			this->label2->TabIndex = 89;
			this->label2->Text = L"¬‚Â‰ËÚÂ ÎÓ„ËÌ:";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGreen;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(467, 392);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(281, 46);
			this->button15->TabIndex = 88;
			this->button15->Text = L"¬ÓÈÚË";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Login::button15_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::MintCream;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"œÓÎ¸ÁÓ‚‡ÚÂÎ¸", L"¿‰ÏËÌËÒÚ‡ÚÓ" });
			this->comboBox2->Location = System::Drawing::Point(328, 311);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(420, 39);
			this->comboBox2->TabIndex = 87;
			this->comboBox2->Text = L"–ÓÎ¸";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(147, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 27);
			this->label4->TabIndex = 92;
			this->label4->Text = L"¬‚Â‰ËÚÂ Ô‡ÓÎ¸:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(315, 183);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(433, 39);
			this->textBox1->TabIndex = 93;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(328, 247);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(420, 39);
			this->textBox2->TabIndex = 94;
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::Maroon;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->linkLabel2->LinkColor = System::Drawing::Color::DarkGreen;
			this->linkLabel2->Location = System::Drawing::Point(462, 584);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(218, 27);
			this->linkLabel2->TabIndex = 96;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"«‡Â„ËÒÚËÓ‚‡Ú¸Òˇ";
			this->linkLabel2->VisitedLinkColor = System::Drawing::Color::DarkGreen;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel2_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(280, 584);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 27);
			this->label5->TabIndex = 95;
			this->label5->Text = L"ÕÂÚ ‡ÍÍ‡ÛÌÚ‡\?";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 29);
			this->menuStrip1->TabIndex = 97;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem
			// 
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Name = L"Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem";
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Size = System::Drawing::Size(113, 25);
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Text = L"Õ‡ „Î‡‚ÌÛ˛";
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Login::Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"¬ıÓ‰";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = textBox1->Text;
		String^ password = textBox2->Text;
		String^ role = comboBox2->SelectedItem->ToString();
		try {
			String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=MatchGame;Integrated Security=True";
			SqlConnection sqlConnection(connectionString);
			sqlConnection.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE login=@login AND password=@password AND role=@role;";
			SqlCommand command(sqlQuery, % sqlConnection);
			command.Parameters->AddWithValue("@login", login);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@role", role);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->login = reader->GetString(1);
				user->email = reader->GetString(2);
				user->role = reader->GetString(3);
				user->numBonuses = reader->GetInt32(4);
				user->numLevels = reader->GetInt32(5);
				user->password = reader->GetString(6);
				user->review = reader->GetString(7);
				user->place = reader->GetInt32(8);
				this->Close();
			}
			else if (login == "admin" && password == "132255" && role == L"¿‰ÏËÌËÒÚ‡ÚÓ")
			{
				Login::Close();
				Admin_Screen^ adminscr = gcnew Admin_Screen();
				adminscr->ShowDialog();
			}
			else if (login == "admin" && password == "132255")
			{
				MessageBox::Show("¬˚ ÌÂ ˇ‚ÎˇÂÚÂÒ¸ ‡‰ÏËÌËÒÚ‡ÚÓÓÏ!", "ŒÚÍ‡Á‡ÌÓ ‚ ‰ÓÒÚÛÔÂ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
			else if (login->Length == 0 || password->Length == 0 || role->Length == 0) {
				MessageBox::Show("ƒÎˇ ‚ıÓ‰‡ ÌÛÊÌÓ Á‡ÔÓÎÌËÚ¸ ‚ÒÂ ÔÓÎˇ!", "Œ¯Ë·Í‡ ‚ıÓ‰‡", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else {
				MessageBox::Show("ÕÂ‚ÂÌ˚È ÎÓ„ËÌ ËÎË Ô‡ÓÎ¸! ≈ÒÎË Û ‚‡Ò Â˘Â ÌÂÚ ‡ÍÍ‡ÛÌÚ‡ - Á‡Â„ËÒÚËÛÈÚÂÒ¸", "Œ¯Ë·Í‡ ‚ıÓ‰‡", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e) {}
		if (user != nullptr)
		{
			StartGame_Screen^ start = gcnew StartGame_Screen();
			start->ShowDialog();
			Login::Close();
		}
	}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Register^ reg = gcnew Register();
	reg->ShowDialog();
	Login::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	InitializeComponent();
}
private: System::Void Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Login::Close();
}
};
}
