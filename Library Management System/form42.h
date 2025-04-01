#pragma once
#include"form5.h";


namespace LibraryManagementSystem  {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form4
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		form4(void)
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
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  add_btn;
	private: System::Windows::Forms::Button^  remove_btn;
	private: System::Windows::Forms::Button^  Enter_btn;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::ListBox^  listBox2;


	protected: 

	protected: 




	private: System::Windows::Forms::Label^  Explain_lbl;
	private: System::Windows::Forms::Label^  Request_lbl;
	private: System::Windows::Forms::TextBox^  Entery_txtbox;




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
			this->Explain_lbl = (gcnew System::Windows::Forms::Label());
			this->Request_lbl = (gcnew System::Windows::Forms::Label());
			this->Entery_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// add_btn
			// 
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->add_btn->ForeColor = System::Drawing::Color::Black;
			this->add_btn->Location = System::Drawing::Point(281, 94);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(90, 29);
			this->add_btn->TabIndex = 0;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &form4::add_btn_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::Color::MidnightBlue;
			this->remove_btn->Location = System::Drawing::Point(473, 206);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(77, 28);
			this->remove_btn->TabIndex = 1;
			this->remove_btn->Text = L"Remove";
			this->remove_btn->UseVisualStyleBackColor = true;
			this->remove_btn->Click += gcnew System::EventHandler(this, &form4::remove_btn_Click);
			// 
			// Enter_btn
			// 
			this->Enter_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Enter_btn->ForeColor = System::Drawing::Color::DarkGreen;
			this->Enter_btn->Location = System::Drawing::Point(227, 326);
			this->Enter_btn->Name = L"Enter_btn";
			this->Enter_btn->Size = System::Drawing::Size(152, 34);
			this->Enter_btn->TabIndex = 2;
			this->Enter_btn->Text = L"Enter";
			this->Enter_btn->UseVisualStyleBackColor = true;
			this->Enter_btn->Click += gcnew System::EventHandler(this, &form4::Enter_btn_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"Islamic", L"Medical", L"Scientific", L"Computer Science", 
				L"Novel", L"Math", L"Culture", L"Sport", L"Literature", L"politics"});
			this->listBox1->Location = System::Drawing::Point(12, 37);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(253, 165);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &form4::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::White;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(383, 36);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(190, 165);
			this->listBox2->TabIndex = 4;
			// 
			// Explain_lbl
			// 
			this->Explain_lbl->AutoSize = true;
			this->Explain_lbl->BackColor = System::Drawing::SystemColors::Control;
			this->Explain_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Explain_lbl->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Explain_lbl->Location = System::Drawing::Point(9, 12);
			this->Explain_lbl->Name = L"Explain_lbl";
			this->Explain_lbl->Size = System::Drawing::Size(266, 22);
			this->Explain_lbl->TabIndex = 5;
			this->Explain_lbl->Text = L"These Are The Fields Available:-";
			// 
			// Request_lbl
			// 
			this->Request_lbl->AutoSize = true;
			this->Request_lbl->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Request_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Request_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Request_lbl->Location = System::Drawing::Point(39, 277);
			this->Request_lbl->Name = L"Request_lbl";
			this->Request_lbl->Size = System::Drawing::Size(376, 23);
			this->Request_lbl->TabIndex = 6;
			this->Request_lbl->Text = L"Please Enter Your Age To Faciliate Your Search:-";
			// 
			// Entery_txtbox
			// 
			this->Entery_txtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Entery_txtbox->Location = System::Drawing::Point(421, 277);
			this->Entery_txtbox->Name = L"Entery_txtbox";
			this->Entery_txtbox->Size = System::Drawing::Size(47, 26);
			this->Entery_txtbox->TabIndex = 7;
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(585, 392);
			this->Controls->Add(this->Entery_txtbox);
			this->Controls->Add(this->Request_lbl);
			this->Controls->Add(this->Explain_lbl);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Enter_btn);
			this->Controls->Add(this->remove_btn);
			this->Controls->Add(this->add_btn);
			this->ForeColor = System::Drawing::Color::Crimson;
			this->Name = L"form4";
			this->Text = L"form4";
			this->Load += gcnew System::EventHandler(this, &form4::form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form4_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void add_btn_Click(System::Object^  sender, System::EventArgs^  e) {String^ item=Convert::ToString(listBox1->SelectedItem);
			 listBox2->Items->Add(item);
			 }
private: System::Void remove_btn_Click(System::Object^  sender, System::EventArgs^  e) {String^ item=Convert::ToString(listBox2->SelectedItem);
			 listBox2->Items->Remove(item);
		 }
private: System::Void Enter_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		form5^frm=gcnew form5();
		frm->ShowDialog();
			 
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

