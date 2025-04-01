#pragma once
#include"form3.h";

namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_username;
	private: System::Windows::Forms::Label^  lbl_pass;
	protected: 



	private: System::Windows::Forms::TextBox^  user_txt;
	private: System::Windows::Forms::TextBox^  pass_txt;
	private: System::Windows::Forms::Button^  Enter_btn;
	private: System::Windows::Forms::Button^  Quit_btn;






	private: System::Windows::Forms::Label^  lbl_login;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->lbl_pass = (gcnew System::Windows::Forms::Label());
			this->user_txt = (gcnew System::Windows::Forms::TextBox());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->Enter_btn = (gcnew System::Windows::Forms::Button());
			this->Quit_btn = (gcnew System::Windows::Forms::Button());
			this->lbl_login = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_username->Location = System::Drawing::Point(-2, 89);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(118, 29);
			this->lbl_username->TabIndex = 1;
			this->lbl_username->Text = L"UserName:";
			// 
			// lbl_pass
			// 
			this->lbl_pass->AutoSize = true;
			this->lbl_pass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_pass->Location = System::Drawing::Point(3, 142);
			this->lbl_pass->Name = L"lbl_pass";
			this->lbl_pass->Size = System::Drawing::Size(113, 29);
			this->lbl_pass->TabIndex = 2;
			this->lbl_pass->Text = L"Password:";
			// 
			// user_txt
			// 
			this->user_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_txt->Location = System::Drawing::Point(113, 98);
			this->user_txt->Name = L"user_txt";
			this->user_txt->Size = System::Drawing::Size(300, 24);
			this->user_txt->TabIndex = 3;
			// 
			// pass_txt
			// 
			this->pass_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass_txt->Location = System::Drawing::Point(113, 147);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->PasswordChar = '*';
			this->pass_txt->Size = System::Drawing::Size(300, 24);
			this->pass_txt->TabIndex = 4;
			// 
			// Enter_btn
			// 
			this->Enter_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Enter_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Enter_btn->Location = System::Drawing::Point(90, 208);
			this->Enter_btn->Name = L"Enter_btn";
			this->Enter_btn->Size = System::Drawing::Size(104, 41);
			this->Enter_btn->TabIndex = 5;
			this->Enter_btn->Text = L"Enter";
			this->Enter_btn->UseVisualStyleBackColor = false;
			this->Enter_btn->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// Quit_btn
			// 
			this->Quit_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Quit_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Quit_btn->Location = System::Drawing::Point(230, 208);
			this->Quit_btn->Name = L"Quit_btn";
			this->Quit_btn->Size = System::Drawing::Size(99, 41);
			this->Quit_btn->TabIndex = 6;
			this->Quit_btn->Text = L"Quit";
			this->Quit_btn->UseVisualStyleBackColor = false;
			this->Quit_btn->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// lbl_login
			// 
			this->lbl_login->AutoSize = true;
			this->lbl_login->BackColor = System::Drawing::Color::Silver;
			this->lbl_login->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_login->Location = System::Drawing::Point(155, 29);
			this->lbl_login->Name = L"lbl_login";
			this->lbl_login->Size = System::Drawing::Size(126, 41);
			this->lbl_login->TabIndex = 7;
			this->lbl_login->Text = L"Log-In";
			this->lbl_login->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(435, 278);
			this->Controls->Add(this->lbl_login);
			this->Controls->Add(this->Quit_btn);
			this->Controls->Add(this->Enter_btn);
			this->Controls->Add(this->pass_txt);
			this->Controls->Add(this->user_txt);
			this->Controls->Add(this->lbl_pass);
			this->Controls->Add(this->lbl_username);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form2";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(pass_txt->Text=="admin"&&user_txt->Text=="admin")
				 {
					 
					form3^frm=gcnew form3();
					 frm->ShowDialog();  
				 }
				  

				 else
					 MessageBox::Show("Invalid password ","Error Message",MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
