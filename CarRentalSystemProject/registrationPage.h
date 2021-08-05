#pragma once

namespace CarRentalSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for registrationPage
	/// </summary>
	public ref class registrationPage : public System::Windows::Forms::Form
	{
	public:
		registrationPage(void)
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
		~registrationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationPage::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Constantia", 46.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::LightGray;
			this->textBox2->Location = System::Drawing::Point(51, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(841, 94);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"CAR RENTAL SYSTEM";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::LightGray;
			this->textBox3->Location = System::Drawing::Point(36, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(270, 49);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"First Name";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(36, 365);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(270, 49);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Email";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::LightGray;
			this->textBox4->Location = System::Drawing::Point(36, 244);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(270, 49);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"Last Name";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::LightGray;
			this->textBox5->Location = System::Drawing::Point(36, 486);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(270, 49);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"Password";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Constantia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::LightGray;
			this->textBox6->Location = System::Drawing::Point(36, 595);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(659, 37);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"* Remember your username will be your email";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 685);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 60);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &registrationPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(520, 685);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 60);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &registrationPage::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::LightGray;
			this->richTextBox1->Location = System::Drawing::Point(290, 137);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(391, 44);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Black;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::Color::LightGray;
			this->richTextBox2->Location = System::Drawing::Point(290, 370);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(391, 44);
			this->richTextBox2->TabIndex = 14;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::Black;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->ForeColor = System::Drawing::Color::LightGray;
			this->richTextBox3->Location = System::Drawing::Point(290, 486);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox3->Size = System::Drawing::Size(391, 44);
			this->richTextBox3->TabIndex = 15;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::Black;
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Constantia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->ForeColor = System::Drawing::Color::LightGray;
			this->richTextBox5->Location = System::Drawing::Point(290, 244);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox5->Size = System::Drawing::Size(391, 44);
			this->richTextBox5->TabIndex = 17;
			this->richTextBox5->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(290, 179);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(391, 2);
			this->panel1->TabIndex = 18;
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
			this->panel3->Location = System::Drawing::Point(290, 286);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(391, 2);
			this->panel3->TabIndex = 19;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(0, -24);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(286, 10);
			this->panel4->TabIndex = 7;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Location = System::Drawing::Point(290, 412);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(391, 2);
			this->panel5->TabIndex = 20;
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(0, -24);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(286, 10);
			this->panel6->TabIndex = 7;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Location = System::Drawing::Point(290, 528);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(391, 2);
			this->panel7->TabIndex = 21;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(0, -24);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(286, 10);
			this->panel8->TabIndex = 7;
			// 
			// registrationPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1459, 840);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Name = L"registrationPage";
			this->Text = L"registrationPage";
			this->Load += gcnew System::EventHandler(this, &registrationPage::registrationPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registrationPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// register
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// exit
	}

	};
}
