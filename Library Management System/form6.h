#pragma once
#include"form7.h";
namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for form6
	/// </summary>
	public ref class form6 : public System::Windows::Forms::Form
	{
	public:
		form6(void)
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
		~form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  user_lbl;
	private: System::Windows::Forms::Label^  pass_lbl;
	protected: 



	private: System::Windows::Forms::TextBox^  user_txt;
	private: System::Windows::Forms::TextBox^  pass_txt;
	private: System::Windows::Forms::Button^  sign_btn;
	private: System::Windows::Forms::Button^  cancel_btn;






	private: System::Windows::Forms::Label^  Signup_lbl;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form6::typeid));
			this->user_lbl = (gcnew System::Windows::Forms::Label());
			this->pass_lbl = (gcnew System::Windows::Forms::Label());
			this->user_txt = (gcnew System::Windows::Forms::TextBox());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->sign_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->Signup_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// user_lbl
			// 
			this->user_lbl->AutoSize = true;
			this->user_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_lbl->Location = System::Drawing::Point(3, 97);
			this->user_lbl->Name = L"user_lbl";
			this->user_lbl->Size = System::Drawing::Size(118, 29);
			this->user_lbl->TabIndex = 1;
			this->user_lbl->Text = L"UserName:";
			// 
			// pass_lbl
			// 
			this->pass_lbl->AutoSize = true;
			this->pass_lbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass_lbl->Location = System::Drawing::Point(8, 151);
			this->pass_lbl->Name = L"pass_lbl";
			this->pass_lbl->Size = System::Drawing::Size(113, 29);
			this->pass_lbl->TabIndex = 2;
			this->pass_lbl->Text = L"Password:";
			// 
			// user_txt
			// 
			this->user_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_txt->Location = System::Drawing::Point(113, 98);
			this->user_txt->Name = L"user_txt";
			this->user_txt->Size = System::Drawing::Size(300, 29);
			this->user_txt->TabIndex = 3;
			// 
			// pass_txt
			// 
			this->pass_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass_txt->Location = System::Drawing::Point(113, 152);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->PasswordChar = '*';
			this->pass_txt->Size = System::Drawing::Size(300, 29);
			this->pass_txt->TabIndex = 4;
			// 
			// sign_btn
			// 
			this->sign_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->sign_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sign_btn->Location = System::Drawing::Point(92, 208);
			this->sign_btn->Name = L"sign_btn";
			this->sign_btn->Size = System::Drawing::Size(107, 41);
			this->sign_btn->TabIndex = 5;
			this->sign_btn->Text = L"Sign";
			this->sign_btn->UseVisualStyleBackColor = false;
			this->sign_btn->Click += gcnew System::EventHandler(this, &form6::button1_Click);
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cancel_btn->Location = System::Drawing::Point(270, 208);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(116, 41);
			this->cancel_btn->TabIndex = 6;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &form6::button2_Click);
			// 
			// Signup_lbl
			// 
			this->Signup_lbl->AutoSize = true;
			this->Signup_lbl->BackColor = System::Drawing::Color::LightGray;
			this->Signup_lbl->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Signup_lbl->Location = System::Drawing::Point(149, 26);
			this->Signup_lbl->Name = L"Signup_lbl";
			this->Signup_lbl->Size = System::Drawing::Size(151, 40);
			this->Signup_lbl->TabIndex = 7;
			this->Signup_lbl->Text = L"Sign-UP";
			this->Signup_lbl->Click += gcnew System::EventHandler(this, &form6::label3_Click);
			// 
			// form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(461, 278);
			this->Controls->Add(this->Signup_lbl);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->sign_btn);
			this->Controls->Add(this->pass_txt);
			this->Controls->Add(this->user_txt);
			this->Controls->Add(this->pass_lbl);
			this->Controls->Add(this->user_lbl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form6";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &form6::form6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 StreamWriter^ sr= gcnew StreamWriter("users.txt",true);
				 String^ full_name="";
				String^ str1=user_txt->Text;
				String^ str2=pass_txt->Text;
				full_name= str1+"|"+str2;
				sr->WriteLine(full_name);
				sr->Close();
				 form8^frm=gcnew form8();
					 frm->ShowDialog();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void form6_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
