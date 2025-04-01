#pragma once
#include"form6.h";
namespace LibraryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form5
	/// </summary>
	public ref class form5 : public System::Windows::Forms::Form
	{
	public:
		form5(void)
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
		~form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label1;






	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  Name;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;



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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"AlQuran Alkareem", 
				L"Islamic", L"___", L"141"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Diamond Dust", 
				L"Novel", L"2010", L"142"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"The Blue Elephant", 
				L"Novel", L"2012", L"143"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Vertigo", 
				L"Novel", L"2007", L"144"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"God Land", 
				L"Novel", L"2016", L"145"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Deer hunting season", 
				L"Novel", L"2017", L"146"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"1919", 
				L"Novel", L"2014", L"147"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Physics for Scientists and Engineers, Volume 5", 
				L"scientific", L"1982", L"148"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Essentials of College Physics", 
				L"scientific", L"2006", L"149"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Student Solutions Manual with Study Guide", 
				L"scientific", L"2008", L"150"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Physics", 
				L"scientific", L"1986", L"151"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"College Physics", 
				L"scientific", L"1976", L"152"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Calculus: Early Transcendentals", 
				L"Mathematical", L"1983", L"153"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Advanced Engineering Mathematics", 
				L"Mathematical", L"1962", L"154"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Modern Engineering Mathematics", 
				L"Mathematical", L"1992", L"155"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Discrete mathematics and its applications", 
				L"Mathematical", L"1988", L"156"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"C++ for Computer Science and Engineering", 
				L"Computer Science", L"2000", L"157"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem18 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Digital Signal Processing - A Modern Introduction", 
				L"Computer Science", L"2006", L"158"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem19 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"C++ Primer", 
				L"Computer Science", L"1989", L"159"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem20 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"The C++ Standard Library: A Tutorial and Reference", 
				L"Computer Science", L"1999", L"160"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem21 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"C++ Templates: The Complete Guide", 
				L"Computer Science", L"2002", L"161"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem22 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"The Design and Evolution of C++", 
				L"Computer Science", L"1994", L"162"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem23 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Oxford Handbook of Geriatric Medicine", 
				L"medical", L"2006", L"163"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem24 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Medical Medium Liver Rescue: Answers to Eczema, Psoriasis, Diabetes, Strep, ...", 
				L"medical", L"2018", L"164"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem25 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Disorders of the Rotator Cuff and Biceps Tendon E‑Book: The Surgeon’s Guide to .." 
				L".", 
				L"medical", L"2019", L"165"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem26 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Clinical medicine", 
				L"medical", L"1987", L"166"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem27 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Clinical Medical Assisting", 
				L"medical", L"2008", L"167"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem28 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Medical-surgical Nursing: Critical Thinking in Client Care", 
				L"medical", L"1993", L"168"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem29 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"First Aid for the USMLE Step 2 CS", 
				L"medical", L"2004", L"169"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem30 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {L"Sociology as Applied to Medicine", 
				L"medical", L"1982", L"170"}, -1));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form5::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(204, 335);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 24);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &form5::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(84, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"&Get it";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form5::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(254, 375);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"&Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form5::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 339);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter a book code:";
			this->label1->Click += gcnew System::EventHandler(this, &form5::label1_Click);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->Name, this->columnHeader3, 
				this->columnHeader4, this->columnHeader5});
			this->listView2->Font = (gcnew System::Drawing::Font(L"Poor Richard", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			listViewItem2->ToolTipText = L"Vertigo";
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(30) {listViewItem1, listViewItem2, 
				listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10, listViewItem11, 
				listViewItem12, listViewItem13, listViewItem14, listViewItem15, listViewItem16, listViewItem17, listViewItem18, listViewItem19, 
				listViewItem20, listViewItem21, listViewItem22, listViewItem23, listViewItem24, listViewItem25, listViewItem26, listViewItem27, 
				listViewItem28, listViewItem29, listViewItem30});
			this->listView2->Location = System::Drawing::Point(27, 24);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(403, 305);
			this->listView2->TabIndex = 8;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// Name
			// 
			this->Name->Text = L"Name";
			this->Name->Width = 153;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Type";
			this->columnHeader3->Width = 84;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Publication year";
			this->columnHeader4->Width = 55;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Book\'s Code";
			this->columnHeader5->Width = 97;
			// 
			// form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 442);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			//this->Name = L"form5";
			this->Text = L"Book Selection Form";
			this->Load += gcnew System::EventHandler(this, &form5::form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String ^ userName =  textBox1 ->Text;			
				}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 double Var1= Convert::ToDouble(textBox1->Text);
			 if(Var1>=141 && Var1<=170)
			 {
			 
			 form6^frm=gcnew form6();
					 frm->ShowDialog();
			 }
			 else
				 MessageBox::Show ("Invaild Book Code Number,Please Enter the correct code number", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		 }

private: System::Void form5_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close ();
		 }
};
}

