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
	/// Summary for Level_3_Cars
	/// </summary>
	public ref class Level_3_Cars : public System::Windows::Forms::Form
	{
	private:
		array<Image^>^ cars;
		array<int>^ index;
		Button^ firstCar;
		int firstIndex, found = 0, movement, numBonuses = 0, numLevels = 0;
	private: int countdownMinutes, countdownSeconds;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ secondsLabel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÌÓ‚‡ˇ»„‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::Label^ minutesLabel;
		   void updateCards()
		{
			Random^ rnd = gcnew Random();
			for (int i = 0; i < 18; i++)
			{
				int number = rnd->Next(0, 9);
				int temp = index[i];
				index[i] = index[number];
				index[number] = temp;
			}
		}
	public:
		Level_3_Cars(void)
		{
			InitializeComponent();
			cars = gcnew array<Image^> {
				Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\bmw.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\audi.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\bentley.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\nissan.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\ford.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\maserati.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\mercedes.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\peugeot.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl3\\cars\\toyota.png")
			};

			index = gcnew array<int> { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8 };
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level_3_Cars()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button18;
	protected:
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
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
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->secondsLabel = (gcnew System::Windows::Forms::Label());
			this->minutesLabel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::RoyalBlue;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(724, 441);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(105, 105);
			this->button18->TabIndex = 86;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::RoyalBlue;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(592, 441);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(105, 105);
			this->button17->TabIndex = 85;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::RoyalBlue;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(462, 441);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(105, 105);
			this->button16->TabIndex = 84;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::RoyalBlue;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(330, 441);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(105, 105);
			this->button15->TabIndex = 83;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::RoyalBlue;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(199, 441);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(105, 105);
			this->button14->TabIndex = 82;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::RoyalBlue;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(65, 441);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(105, 105);
			this->button13->TabIndex = 81;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::RoyalBlue;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(724, 318);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(105, 105);
			this->button12->TabIndex = 80;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::RoyalBlue;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(592, 318);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(105, 105);
			this->button11->TabIndex = 79;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::RoyalBlue;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(462, 318);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(105, 105);
			this->button10->TabIndex = 78;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::RoyalBlue;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(330, 318);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(105, 105);
			this->button9->TabIndex = 77;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::RoyalBlue;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(199, 318);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 105);
			this->button8->TabIndex = 76;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::RoyalBlue;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(65, 318);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 105);
			this->button7->TabIndex = 75;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(724, 196);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 105);
			this->button6->TabIndex = 74;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::RoyalBlue;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(592, 196);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 105);
			this->button5->TabIndex = 73;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(462, 196);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 105);
			this->button4->TabIndex = 72;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(330, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 105);
			this->button3->TabIndex = 71;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(199, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 105);
			this->button2->TabIndex = 70;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(65, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 105);
			this->button1->TabIndex = 69;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Level_3_Cars::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(56, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 50);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Level 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(60, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(287, 27);
			this->label4->TabIndex = 91;
			this->label4->Text = L"¬ÂÏˇ ‰Ó ÓÍÓÌ˜‡ÌËˇ Ë„˚: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(437, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 33);
			this->label3->TabIndex = 90;
			this->label3->Text = L":";
			// 
			// secondsLabel
			// 
			this->secondsLabel->AutoSize = true;
			this->secondsLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->secondsLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->secondsLabel->Location = System::Drawing::Point(472, 144);
			this->secondsLabel->Name = L"secondsLabel";
			this->secondsLabel->Size = System::Drawing::Size(43, 33);
			this->secondsLabel->TabIndex = 89;
			this->secondsLabel->Text = L"SS";
			// 
			// minutesLabel
			// 
			this->minutesLabel->AutoSize = true;
			this->minutesLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->minutesLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->minutesLabel->Location = System::Drawing::Point(370, 144);
			this->minutesLabel->Name = L"minutesLabel";
			this->minutesLabel->Size = System::Drawing::Size(61, 33);
			this->minutesLabel->TabIndex = 88;
			this->minutesLabel->Text = L"MM";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Level_3_Cars::timer1_Tick);
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
			this->menuStrip1->TabIndex = 96;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ÌÓ‚‡ˇ»„‡ToolStripMenuItem
			// 
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Name = L"ÌÓ‚‡ˇ»„‡ToolStripMenuItem";
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Text = L"ÕÓ‚‡ˇ Ë„‡";
			this->ÌÓ‚‡ˇ»„‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Level_3_Cars::ÌÓ‚‡ˇ»„‡ToolStripMenuItem_Click);
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"¬˚ıÓ‰";
			this->‚˚ıÓ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Level_3_Cars::‚˚ıÓ‰ToolStripMenuItem_Click);
			// 
			// Level_3_Cars
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->secondsLabel);
			this->Controls->Add(this->minutesLabel);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Level_3_Cars";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"\"Ã‡ÍË ‡‚ÚÓÏÓ·ËÎÂÈ\" | ”Ó‚ÂÌ¸ 3";
			this->Load += gcnew System::EventHandler(this, &Level_3_Cars::Level_3_Cars_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Level_3_Cars_Load(System::Object^ sender, System::EventArgs^ e) {
	updateCards();
	countdownMinutes = 2, countdownSeconds = 0;
	timer1->Start();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = dynamic_cast<Button^>(sender);
	button->Enabled = false;
	int buttonNo = Int32::Parse(button->Name->Substring(6));
	int indexNo = index[buttonNo - 1];
	button->BackgroundImage = cars[indexNo];
	button->Refresh();
	if (firstCar == nullptr)
	{
		firstCar = button;
		firstIndex = indexNo;
		movement++;
	}
	else
	{
		System::Threading::Thread::Sleep(1000);
		firstCar->BackgroundImage = nullptr;
		button->BackgroundImage = nullptr;
		if (firstIndex == indexNo)
		{
			found++;
			firstCar->Visible = false;
			button->Visible = false;
		}
		button->Enabled = true;
		firstCar->Enabled = true;
		firstCar = nullptr;
	}
	if (found == 9)
	{
		timer1->Stop();
		Level_3_Cars::Close();
		numLevels++;
		End^ end = gcnew End();
		end->label6->Text = "18";
		end->label7->Text = (1 - countdownMinutes) + ":" + (60 - countdownSeconds);
		end->label8->Text = countdownMinutes + ":" + countdownSeconds;
		if ((1 - countdownMinutes) == 0 && (60 - countdownSeconds) < 60)
		{
			numBonuses = 50;
		}
		else if ((1 - countdownMinutes) == 0)
		{
			numBonuses = 30;
		}
		else if ((1 - countdownMinutes) == 1 && (60 - countdownSeconds) < 60)
		{
			numBonuses = 20;
		}
		else if (countdownMinutes == 2)
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
		timer1->Stop(); 
		Level_3_Cars::Close();
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
	countdownMinutes = 2, countdownSeconds = 0;
	timer1->Start();
	InitializeComponent();
}
private: System::Void ‚˚ıÓ‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Level_3_Cars::Close();
}
};
}
