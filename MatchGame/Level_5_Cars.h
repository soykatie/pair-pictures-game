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
	/// Summary for Level_5_Cars
	/// </summary>
	public ref class Level_5_Cars : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::Label^ minutesLabel;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::Timer^ timer1;
		   void updateCards()
		{
			Random^ rnd = gcnew Random();
			for (int i = 0; i < 28; i++)
			{
				int number = rnd->Next(0, 14);
				int temp = index[i];
				index[i] = index[number];
				index[number] = temp;
			}
		}
	public:
		Level_5_Cars(void)
		{
			InitializeComponent();
			cars = gcnew array<Image^> {
				Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\bmw.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\audi.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\bentley.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\nissan.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\ford.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\maserati.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\jaguar.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\landrover.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\geely.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\honda.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\lexus.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\mercedes.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\peugeot.png"),
					Image::FromFile(Application::StartupPath + "\\Pictures\\lvl5\\cars\\toyota.png")
			};

			index = gcnew array<int> { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13 };
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level_5_Cars()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button28;
	protected:
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
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
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
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
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::RoyalBlue;
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(735, 486);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(85, 85);
			this->button28->TabIndex = 152;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::RoyalBlue;
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(735, 382);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(85, 85);
			this->button27->TabIndex = 151;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::RoyalBlue;
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(735, 279);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(85, 85);
			this->button26->TabIndex = 150;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::RoyalBlue;
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(735, 176);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(85, 85);
			this->button25->TabIndex = 149;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::RoyalBlue;
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(74, 486);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(85, 85);
			this->button24->TabIndex = 148;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::RoyalBlue;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(184, 486);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(85, 85);
			this->button23->TabIndex = 147;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::RoyalBlue;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(295, 486);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(85, 85);
			this->button22->TabIndex = 146;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::RoyalBlue;
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(405, 486);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(85, 85);
			this->button21->TabIndex = 145;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::RoyalBlue;
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(516, 486);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(85, 85);
			this->button20->TabIndex = 144;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::RoyalBlue;
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(626, 486);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(85, 85);
			this->button19->TabIndex = 143;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::RoyalBlue;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(626, 382);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(85, 85);
			this->button18->TabIndex = 142;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::RoyalBlue;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(74, 382);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(85, 85);
			this->button17->TabIndex = 141;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::RoyalBlue;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(184, 382);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 85);
			this->button16->TabIndex = 140;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::RoyalBlue;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(295, 382);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(85, 85);
			this->button15->TabIndex = 139;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::RoyalBlue;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(516, 382);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 85);
			this->button14->TabIndex = 138;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::RoyalBlue;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(405, 382);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 85);
			this->button13->TabIndex = 137;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::RoyalBlue;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(513, 279);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 85);
			this->button12->TabIndex = 136;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::RoyalBlue;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(626, 279);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 85);
			this->button11->TabIndex = 135;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::RoyalBlue;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(405, 279);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 85);
			this->button10->TabIndex = 134;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::RoyalBlue;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(184, 176);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 85);
			this->button9->TabIndex = 133;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::RoyalBlue;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(295, 176);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 85);
			this->button8->TabIndex = 132;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::RoyalBlue;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(405, 176);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 85);
			this->button7->TabIndex = 131;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(516, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 85);
			this->button6->TabIndex = 130;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::RoyalBlue;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(626, 176);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 85);
			this->button5->TabIndex = 129;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(74, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 85);
			this->button4->TabIndex = 128;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(184, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 85);
			this->button3->TabIndex = 127;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(295, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 85);
			this->button2->TabIndex = 126;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(74, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 85);
			this->button1->TabIndex = 125;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Level_5_Cars::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(65, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 50);
			this->label1->TabIndex = 123;
			this->label1->Text = L"Level 5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(69, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(287, 27);
			this->label4->TabIndex = 156;
			this->label4->Text = L"����� �� ��������� ����: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(446, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 33);
			this->label3->TabIndex = 155;
			this->label3->Text = L":";
			// 
			// secondsLabel
			// 
			this->secondsLabel->AutoSize = true;
			this->secondsLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->secondsLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->secondsLabel->Location = System::Drawing::Point(481, 129);
			this->secondsLabel->Name = L"secondsLabel";
			this->secondsLabel->Size = System::Drawing::Size(43, 33);
			this->secondsLabel->TabIndex = 154;
			this->secondsLabel->Text = L"SS";
			// 
			// minutesLabel
			// 
			this->minutesLabel->AutoSize = true;
			this->minutesLabel->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16, System::Drawing::FontStyle::Italic));
			this->minutesLabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->minutesLabel->Location = System::Drawing::Point(379, 129);
			this->minutesLabel->Name = L"minutesLabel";
			this->minutesLabel->Size = System::Drawing::Size(61, 33);
			this->minutesLabel->TabIndex = 153;
			this->minutesLabel->Text = L"MM";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Level_5_Cars::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(895, 24);
			this->menuStrip1->TabIndex = 157;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->���������ToolStripMenuItem->Text = L"����� ����";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Level_5_Cars::���������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Bold));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Level_5_Cars::�����ToolStripMenuItem_Click);
			// 
			// Level_5_Cars
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
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
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
			this->Name = L"Level_5_Cars";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"\"����� �����������\" | ������� 5";
			this->Load += gcnew System::EventHandler(this, &Level_5_Cars::Level_5_Cars_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Level_5_Cars_Load(System::Object^ sender, System::EventArgs^ e) {
	updateCards();
	countdownMinutes = 4, countdownSeconds = 0;
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
	if (found == 14)
	{
		timer1->Stop();
		Level_5_Cars::Close();
		numLevels++;
		End^ end = gcnew End();
		end->label6->Text = "28";
		end->label7->Text = (4 - countdownMinutes) + ":" + (60 - countdownSeconds);
		end->label8->Text = countdownMinutes + ":" + countdownSeconds;
		if ((4 - countdownMinutes) == 0)
		{
			numBonuses = 150;
		}
		else if ((3 - countdownMinutes) == 0 && (60 - countdownSeconds) <= 60)
		{
			numBonuses = 100;
		}
		else if ((3 - countdownMinutes) == 1 && (60 - countdownSeconds) <= 60)
		{
			numBonuses = 50;
		}
		else if ((3 - countdownMinutes) == 2 && (60 - countdownSeconds) <= 60)
		{
			numBonuses = 10;
		}
		else if (countdownMinutes == 4)
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
		Level_5_Cars::Close();
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
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	found = 0;
	this->Controls->Clear();
	updateCards();
	countdownMinutes = 4, countdownSeconds = 0;
	timer1->Start();
	InitializeComponent();
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Level_5_Cars::Close();
}
};
}
