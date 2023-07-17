#pragma once
#include "End.h"
#include "End2.h"
using System::Random;
namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Level_1_Princesses
	/// </summary>
	public ref class Level_1_Princesses : public System::Windows::Forms::Form
	{
	private:
		array<Image^>^ princesses;
		array<int>^ index;
		Button^ firstPrincess;
		int firstIndex, found = 0, movement, numBonuses = 0, numLevels = 0;
	private: int countdownMinutes, countdownSeconds;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ secondsLabel;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÌÓ‚‡ˇ»„‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::Label^ minutesLabel;
		   void updateCards()
		{
			Random^ rnd = gcnew Random();

			for (int i = 0; i < 6; i++)
			{
				int number = rnd->Next(0, 3);
				int temp = index[i];
				index[i] = index[number];
				index[number] = temp;
			}
		}
	public:
		Level_1_Princesses(void)
		{
			InitializeComponent();
			princesses = gcnew array<Image^> {
				Image::FromFile(Application::StartupPath + "\\Pictures\\lvl1\\princesses\\ariel.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl1\\princesses\\aurora.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl1\\princesses\\cinderella.png")
			};

			index = gcnew array<int> { 0, 0, 1, 1, 2, 2 };
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level_1_Princesses()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->secondsLabel = (gcnew System::Windows::Forms::Label());
			this->minutesLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(77, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 50);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Level 1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(86, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 200);
			this->button1->TabIndex = 22;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Level_1_Princesses::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(352, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 200);
			this->button2->TabIndex = 23;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Level_1_Princesses::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(608, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 200);
			this->button3->TabIndex = 24;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Level_1_Princesses::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(86, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 200);
			this->button4->TabIndex = 25;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Level_1_Princesses::button1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(352, 379);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 200);
			this->button5->TabIndex = 26;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Level_1_Princesses::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(608, 379);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 200);
			this->button6->TabIndex = 27;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Level_1_Princesses::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Level_1_Princesses::timer1_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(81, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(287, 27);
			this->label4->TabIndex = 87;
			this->label4->Text = L"¬ÂÏˇ ‰Ó ÓÍÓÌ˜‡ÌËˇ Ë„˚: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::Color::Brown;
			this->label3->Location = System::Drawing::Point(463, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 33);
			this->label3->TabIndex = 86;
			this->label3->Text = L":";
			// 
			// secondsLabel
			// 
			this->secondsLabel->AutoSize = true;
			this->secondsLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->secondsLabel->ForeColor = System::Drawing::Color::Brown;
			this->secondsLabel->Location = System::Drawing::Point(493, 103);
			this->secondsLabel->Name = L"secondsLabel";
			this->secondsLabel->Size = System::Drawing::Size(43, 33);
			this->secondsLabel->TabIndex = 85;
			this->secondsLabel->Text = L"SS";
			// 
			// minutesLabel
			// 
			this->minutesLabel->AutoSize = true;
			this->minutesLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->minutesLabel->ForeColor = System::Drawing::Color::Brown;
			this->minutesLabel->Location = System::Drawing::Point(396, 103);
			this->minutesLabel->Name = L"minutesLabel";
			this->minutesLabel->Size = System::Drawing::Size(61, 33);
			this->minutesLabel->TabIndex = 84;
			this->minutesLabel->Text = L"MM";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem,
					this->‚˚ıÓ‰ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 24);
			this->menuStrip1->TabIndex = 93;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ÌÓ‚‡ˇ»„‡ToolStripMenuItem
			// 
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Name = L"ÌÓ‚‡ˇ»„‡ToolStripMenuItem";
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Text = L"ÕÓ‚‡ˇ Ë„‡";
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Level_1_Princesses::ÌÓ‚‡ˇ»„‡ToolStripMenuItem_Click);
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰";
			this->‚˚ıÓ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Level_1_Princesses::‚˚ıÓ‰ToolStripMenuItem_Click);
			// 
			// Level_1_Princesses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->secondsLabel);
			this->Controls->Add(this->minutesLabel);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Level_1_Princesses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"\"œËÌˆÂÒÒ˚\" | ”Ó‚ÂÌ¸ 1";
			this->Load += gcnew System::EventHandler(this, &Level_1_Princesses::Level_1_Princesses_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Level_1_Princesses_Load(System::Object^ sender, System::EventArgs^ e) {
		updateCards();
		countdownMinutes = 0, countdownSeconds = 30;
		timer1->Start();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = dynamic_cast<Button^>(sender);
		button->Enabled = false;
		int buttonNo = Int32::Parse(button->Name->Substring(6));
		int indexNo = index[buttonNo - 1];
		button->BackgroundImage = princesses[indexNo];
		button->Refresh();
		if (firstPrincess == nullptr)
		{
			firstPrincess = button;
			firstIndex = indexNo;
			movement++;
		}
		else
		{
			System::Threading::Thread::Sleep(1000);
			firstPrincess->BackgroundImage = nullptr;
			button->BackgroundImage = nullptr;
			if (firstIndex == indexNo)
			{
				found++;
				firstPrincess->Visible = false;
				button->Visible = false;
			}
			button->Enabled = true;
			firstPrincess->Enabled = true;
			firstPrincess = nullptr;
		}
		if (found == 3)
		{
			timer1->Stop();
			Level_1_Princesses::Close();
			numLevels++;
			End^ end = gcnew End();
			end->label6->Text = "6";
			end->label7->Text = countdownMinutes + ":" + (30 - countdownSeconds);
			end->label8->Text = countdownMinutes + ":" + countdownSeconds;
			if ((30 - countdownSeconds) <= 10)
			{
				numBonuses = 30;
			}
			else if ((30 - countdownSeconds) <= 20)
			{
				numBonuses = 20;
			}
			else if ((30 - countdownSeconds) < 30)
			{
				numBonuses = 10;
			}
			else if ((30 - countdownSeconds) == 30)
			{
				numBonuses = 5;
			}
			end->label9->Text = numBonuses.ToString();
			end->label10->Text = numLevels.ToString();
			end->ShowDialog();
		}
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (countdownMinutes == 0 && countdownSeconds == 0) {
			timer1->Stop(); // Stop the timer
			Level_1_Princesses::Close();
			End2^ end2 = gcnew End2();
			end2->label6->Text = (found * 2).ToString();
			end2->ShowDialog();
		}
		else {
			if (countdownSeconds == 0) {
				countdownSeconds = 59; 
				countdownMinutes -= 1;
			}
			else {
				countdownSeconds -= 1;
			}

			minutesLabel->Text = countdownMinutes.ToString("D2");
			secondsLabel->Text = countdownSeconds.ToString("D2");
		}
}
private: System::Void ÌÓ‚‡ˇ»„‡ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	found = 0;
	this->Controls->Clear();
	updateCards();
	countdownMinutes = 0, countdownSeconds = 30;
	timer1->Start();
	InitializeComponent();
}
private: System::Void ‚˚ıÓ‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Level_1_Princesses::Close();
}
};
}