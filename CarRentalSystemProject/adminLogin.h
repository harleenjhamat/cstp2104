#pragma once

namespace CarRentalSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class adminLogin : public System::Windows::Forms::Form
	{
	public:
		adminLogin(void)
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
		~adminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	internal: System::Windows::Forms::TextBox^ textBox5;
	private:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminLogin::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(0, 10);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Car Rental System";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &adminLogin::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Constantia", 46.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(24, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(841, 94);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"CAR RENTAL SYSTEM";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &adminLogin::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::LightGray;
			this->textBox3->Location = System::Drawing::Point(141, 288);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(270, 49);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Username";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &adminLogin::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::LightGray;
			this->textBox4->Location = System::Drawing::Point(141, 451);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(270, 49);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Password";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::LightGray;
			this->richTextBox1->Location = System::Drawing::Point(150, 352);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(391, 44);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(150, 386);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(391, 2);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, -24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(286, 10);
			this->panel2->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(150, 568);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(389, 2);
			this->panel3->TabIndex = 8;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(0, -24);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(286, 10);
			this->panel4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(150, 658);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 60);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &adminLogin::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(329, 658);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 60);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &adminLogin::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::LightGray;
			this->textBox5->Location = System::Drawing::Point(150, 523);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(391, 44);
			this->textBox5->TabIndex = 9;
			// 
			// adminLogin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1459, 840);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::SizeNS;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Location = System::Drawing::Point(0, 10);
			this->Name = L"adminLogin";
			this->ShowInTaskbar = false;
			this->Text = L"Car Rental System";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &adminLogin::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "admin") {
		if (textBox5->Text == "admin") {
			Application::Exit();
		}
		else {
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
