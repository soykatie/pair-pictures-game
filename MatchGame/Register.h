#pragma once
#include "User.h"
#include "StartGame_Screen.h"
namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label6;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(331, 362);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(420, 39);
			this->textBox2->TabIndex = 103;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(318, 188);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(433, 39);
			this->textBox1->TabIndex = 102;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(150, 368);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 27);
			this->label4->TabIndex = 101;
			this->label4->Text = L"¬‚Â‰ËÚÂ Ô‡ÓÎ¸:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(155, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 46);
			this->button1->TabIndex = 100;
			this->button1->Text = L"—·ÓÒËÚ¸";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(150, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 27);
			this->label3->TabIndex = 99;
			this->label3->Text = L"¬˚·ÂËÚÂ ÓÎ¸:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(150, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 27);
			this->label2->TabIndex = 98;
			this->label2->Text = L"¬‚Â‰ËÚÂ ÎÓ„ËÌ:";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGreen;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(470, 433);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(281, 46);
			this->button15->TabIndex = 97;
			this->button15->Text = L"«‡Â„ËÒÚËÓ‚‡Ú¸Òˇ";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Register::button15_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::MintCream;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"œÓÎ¸ÁÓ‚‡ÚÂÎ¸" });
			this->comboBox2->Location = System::Drawing::Point(331, 300);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(420, 39);
			this->comboBox2->TabIndex = 96;
			this->comboBox2->Text = L"–ÓÎ¸";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(320, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 62);
			this->label1->TabIndex = 95;
			this->label1->Text = L"Register";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(318, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(433, 39);
			this->textBox3->TabIndex = 105;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(150, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 27);
			this->label5->TabIndex = 104;
			this->label5->Text = L"¬‚Â‰ËÚÂ email:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 29);
			this->menuStrip1->TabIndex = 106;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem
			// 
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold));
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Name = L"Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem";
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Size = System::Drawing::Size(113, 25);
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Text = L"Õ‡ „Î‡‚ÌÛ˛";
			this->Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Register::Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::Maroon;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->linkLabel2->LinkColor = System::Drawing::Color::DarkGreen;
			this->linkLabel2->Location = System::Drawing::Point(538, 585);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(74, 27);
			this->linkLabel2->TabIndex = 108;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"¬ÓÈÚË";
			this->linkLabel2->VisitedLinkColor = System::Drawing::Color::DarkGreen;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::linkLabel2_LinkClicked);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(302, 585);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 27);
			this->label6->TabIndex = 107;
			this->label6->Text = L"”ÊÂ ÂÒÚ¸ ‡ÍÍ‡ÛÌÚ\?";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox3);
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
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"–Â„ËÒÚ‡ˆËˇ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = textBox1->Text;
		String^ email = textBox3->Text;
		String^ role = comboBox2->Text;
		String^ password = textBox2->Text;

		if (login->Length == 0 || email->Length == 0 || role->Length == 0 || password->Length == 0 || role->Length == 0) {
			MessageBox::Show("ƒÎˇ ‚ıÓ‰‡ ÌÛÊÌÓ Á‡ÔÓÎÌËÚ¸ ‚ÒÂ ÔÓÎˇ!", "Œ¯Ë·Í‡ ‚ıÓ‰‡", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=MatchGame;Integrated Security=True";
			SqlConnection sqlConnection(connectionString);
			sqlConnection.Open();

			String^ sqlQuery = "INSERT INTO users " + "(login, email, role, password) VALUES (@login, @email, @role, @password);";

			SqlCommand command(sqlQuery, % sqlConnection);
			command.Parameters->AddWithValue("@login", login);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@role", role);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->login = login;
			user->email = email;
			user->role = role;
			user->password = password;

			this->Close();
			StartGame_Screen^ strt = gcnew StartGame_Screen();
			strt->ShowDialog();
			sqlConnection.Close();
		}
		catch (Exception^ e) {}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	InitializeComponent();
}
private: System::Void Ì‡√Î‡‚ÌÛ˛ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Register::Close();
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Register::Close();
}
};
}
