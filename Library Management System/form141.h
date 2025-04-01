#pragma once
#include "Form12.h";

namespace LibraryManagementSystem  {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form141
	/// </summary>
	public ref class form141 : public System::Windows::Forms::Form
	{
	public:
		form141(void)
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
		~form141()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  add_btn;
	private: System::Windows::Forms::Button^  remove_btn;
	private: System::Windows::Forms::Button^  Enter_btn;
	protected: 

	protected: 


	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->Enter_btn = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// add_btn
			// 
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->add_btn->ForeColor = System::Drawing::Color::Black;
			this->add_btn->Location = System::Drawing::Point(422, 145);
			this->add_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(135, 45);
			this->add_btn->TabIndex = 0;
			this->add_btn->Text = L"add";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &form141::add_btn_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::Color::MidnightBlue;
			this->remove_btn->Location = System::Drawing::Point(733, 288);
			this->remove_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(116, 43);
			this->remove_btn->TabIndex = 1;
			this->remove_btn->Text = L"remove";
			this->remove_btn->UseVisualStyleBackColor = true;
			this->remove_btn->Click += gcnew System::EventHandler(this, &form141::remove_btn_Click);
			// 
			// Enter_btn
			// 
			this->Enter_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Enter_btn->ForeColor = System::Drawing::Color::DarkGreen;
			this->Enter_btn->Location = System::Drawing::Point(341, 501);
			this->Enter_btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Enter_btn->Name = L"Enter_btn";
			this->Enter_btn->Size = System::Drawing::Size(228, 52);
			this->Enter_btn->TabIndex = 2;
			this->Enter_btn->Text = L"Enter";
			this->Enter_btn->UseVisualStyleBackColor = true;
			this->Enter_btn->Click += gcnew System::EventHandler(this, &form141::Enter_btn_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"ÑíÇÖÉ", L"Úáæã ", L"ËÞÇÝÉ ", L"ÇÏÈ ", L"ÞÕÕ", 
				L"ßÊÈ ãÊäæÚÉ"});
			this->listBox1->Location = System::Drawing::Point(13, 53);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(378, 207);
			this->listBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::Desktop;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(574, 56);
			this->listBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(275, 207);
			this->listBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(13, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"these are the aread available:-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(79, 426);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(554, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"please Enter your age to faciliate your search:-";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(632, 426);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 35);
			this->textBox1->TabIndex = 7;
			// 
			// form141
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(877, 603);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Enter_btn);
			this->Controls->Add(this->remove_btn);
			this->Controls->Add(this->add_btn);
			this->ForeColor = System::Drawing::Color::Crimson;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"form141";
			this->Text = L"form141";
			this->Load += gcnew System::EventHandler(this, &form141::form141_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form141_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {String^ item=Convert::ToString(listBox1->SelectedItem);
			 listBox2->Items->Add(item);
			 }
private: System::Void remove_btn_Click(System::Object^  sender, System::EventArgs^  e) {String^ item=Convert::ToString(listBox2->SelectedItem);
			 listBox2->Items->Remove(item);
		 }
private: System::Void Enter_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form12^ frm=gcnew Form12();
			frm->ShowDialog();
			this->Hide();
		 }
};
}

