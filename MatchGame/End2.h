#pragma once

namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for End2
	/// </summary>
	public ref class End2 : public System::Windows::Forms::Form
	{
	public:
		End2(void)
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
		~End2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	public: System::Windows::Forms::Label^ label6;

	public:
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Italic));
			this->label6->Location = System::Drawing::Point(648, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 26);
			this->label6->TabIndex = 108;
			this->label6->Text = L"label6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(259, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 27);
			this->label3->TabIndex = 106;
			this->label3->Text = L"Количество найденных картинок:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(355, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 27);
			this->label4->TabIndex = 104;
			this->label4->Text = L"Время игры вышло!";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(253, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 62);
			this->label1->TabIndex = 102;
			this->label1->Text = L"That\'s a pity!";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(346, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 46);
			this->button1->TabIndex = 109;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &End2::button1_Click);
			// 
			// End2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::IndianRed;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Name = L"End2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Failure";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	End2::Close();
}
};
}