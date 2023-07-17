#pragma once

namespace MatchGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for BD_Users_Info
	/// </summary>
	public ref class BD_Users_Info : public System::Windows::Forms::Form
	{
	public:
		BD_Users_Info(void)
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
		~BD_Users_Info()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 30, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(174, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(572, 62);
			this->label1->TabIndex = 105;
			this->label1->Text = L"Users info for admin";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(297, 507);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(311, 59);
			this->button1->TabIndex = 108;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BD_Users_Info::button1_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::DarkGreen;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::DarkSeaGreen;
			this->dataGridView1->Location = System::Drawing::Point(158, 234);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::DarkGreen;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Ivory;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10, System::Drawing::FontStyle::Bold));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(598, 241);
			this->dataGridView1->TabIndex = 109;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Отсортировать по логину", L"Отсортировать по кол-ву бонусов",
					L"Отсортировать по кол-ву пройденных уровней", L"Отсортировать по месту"
			});
			this->comboBox1->Location = System::Drawing::Point(158, 169);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(598, 39);
			this->comboBox1->TabIndex = 110;
			this->comboBox1->Text = L"Отсортировать";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &BD_Users_Info::comboBox1_SelectedIndexChanged);
			// 
			// BD_Users_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(895, 646);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"BD_Users_Info";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Информация о пользователях из базы данных";
			this->Load += gcnew System::EventHandler(this, &BD_Users_Info::BD_Users_Info_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BD_Users_Info_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=MatchGame;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ query = "SELECT * FROM users";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		dataAdapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;
		connection->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BD_Users_Info::Close();
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=MatchGame;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();

	if (comboBox1->SelectedItem->ToString() == L"Отсортировать по логину") {
		String^ query = "SELECT login AS [логин], numBonuses AS [кол-во бонусов], numLevels AS [кол-во пройденных уровней], place AS [место], review AS [отзыв] FROM users ORDER BY numLevels ASC";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		dataAdapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;
		connection->Close();
	}
	else if (comboBox1->SelectedItem->ToString() == L"Отсортировать по кол-ву бонусов") {
		String^ query = "SELECT login AS [логин], numBonuses AS [кол-во бонусов], numLevels AS [кол-во пройденных уровней], place AS [место], review AS [отзыв] FROM users ORDER BY numBonuses DESC";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		dataAdapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;
		connection->Close();
	}
	else if (comboBox1->SelectedItem->ToString() == L"Отсортировать по кол-ву пройденных уровней") {
		String^ query = "SELECT login AS [логин], numBonuses AS [кол-во бонусов], numLevels AS [кол-во пройденных уровней], place AS [место], review AS [отзыв] FROM users ORDER BY numLevels DESC";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		dataAdapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;
		connection->Close();
	}
	else if (comboBox1->SelectedItem->ToString() == L"Отсортировать по месту") {
		String^ query = "SELECT login AS [логин], numBonuses AS [кол-во бонусов], numLevels AS [кол-во пройденных уровней], place AS [место], review AS [отзыв] FROM users WHERE place IS NOT NULL ORDER BY place ASC";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		dataAdapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;
		connection->Close();
	}
}
};
}
